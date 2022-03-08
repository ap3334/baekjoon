#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;


int main()
{
	string input;
	stack<char> test;

	while (1) {
		
		getline(cin, input);

		if (input == ".") return 0;

		for (int i = 0; i < input.size(); i++) {
			if (input[i] == '(' || input[i] == '[') {
				test.push(input[i]);
			}
			else if (input[i] == ')') {
				if (!test.empty() && test.top() == '(') {
					test.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
			else if (input[i] == ']') {
				if (!test.empty() && test.top() == '[') {
					test.pop();
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
			
			if (i == input.size() - 1) {
				if (test.empty()) {
					cout << "yes" << "\n";
					break;
				}
				else {
					cout << "no" << "\n";
					break;
				}
			}
		}

		while (!test.empty()) {
			test.pop();
		}

	}
}
