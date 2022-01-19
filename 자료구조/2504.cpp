#include <iostream>
#include <stack>

using namespace std;

int main(void) {
  
  string problem;
  stack<char> bracket;
  stack<int> calculate;

  cin >> problem;

  for (int i = 0; i < problem.length(); i++) {

    if (problem[i] == '[' || problem[i] == '(') {
      bracket.push(problem[i]);
      calculate.push(0);
    }
    else if (problem[i] == ')') {
      if (bracket.size() == 0 || bracket.top() != '(') {
        cout << 0;
        return 0;
      }

      if (calculate.top() != 0) {
        int tmp = calculate.top() * 2;
        calculate.pop();
        calculate.pop();
        calculate.push(tmp);
        bracket.pop();
      }
      else {
        bracket.pop();
        calculate.pop();
        calculate.push(2);
      }
    }
    else if (problem[i] == ']') {
      if (bracket.size() == 0 || bracket.top() != '[') {
        cout << 0;
        return 0;
      }

      if (calculate.top() != 0) {
        int tmp = calculate.top() * 3;
        calculate.pop();
        calculate.pop();
        calculate.push(tmp);
        bracket.pop();
      }
      else {
        bracket.pop();
        calculate.pop();
        calculate.push(3);
      }
    }

    if (calculate.size() > 2) {
      int tmp1 = calculate.top();
      calculate.pop();
      int tmp2 = calculate.top();
      calculate.pop();

      if (tmp1 != 0 && tmp2 != 0) {
        calculate.push(tmp1 + tmp2);
      }
      else {
        calculate.push(tmp2);
        calculate.push(tmp1);
      }
    }
  } 

  if (bracket.size() != 0)
    cout << 0;
  else if (calculate.size() >= 2) {
    while(!calculate.empty()) {
      int tmp1 = calculate.top();
      calculate.pop();
      int tmp2 = calculate.top();
      calculate.pop();
      cout << tmp1 + tmp2;
    }
  }
  else 
    cout << calculate.top();
}
