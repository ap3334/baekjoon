#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(void) {

	int N, temp;
	double result, num1, num2;
	string form;
	vector<char> v;
	stack<double> s;

	cin >> N >> form;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i < form.size(); i++) {
		if (form[i] == '+') {
			num2 = s.top();
			s.pop();
			num1 = s.top();
			s.pop();
			result = num1 + num2;
			s.push(result);
		}
		else if (form[i] == '-') {
			num2 = s.top();
			s.pop();
			num1 = s.top();
			s.pop();
			result = num1 - num2;
			s.push(result);
		}
		else if (form[i] == '*') {
			num2 = s.top();
			s.pop();
			num1 = s.top();
			s.pop();
			result = num1 * num2;
			s.push(result);
		}
		else if (form[i] == '/') {
			num2 = s.top();
			s.pop();
			num1 = s.top();
			s.pop();
			result = num1 / num2;
			s.push(result);
		}
		else if (form[i] >= 'A' && form[i] <= 'Z') {
			s.push(v[form[i] - 'A']);
		}
	}

	printf("%.2f", s.top());

}
