#include <iostream>
#include <queue>
#include <vector>
#include <math.h>

using namespace std;

struct compare {
  bool operator()(int n1, int n2) {
    if (abs(n1) == abs(n2)) return n1 > n2;
    else return abs(n1) > abs(n2);
  }
};

int main(void) {
  
  priority_queue<int, vector<int>, compare> q;
  int length, tmp;

  cin >> length;

  for (int i = 0; i < length; i++) {
    cin >> tmp;

    if (tmp == 0) {
      if (q.empty()) cout << 0 << "\n";
      else {
        cout << q.top() << "\n";
        q.pop();
      }
    }
    else {
      q.push(tmp);
    }
  }

}
