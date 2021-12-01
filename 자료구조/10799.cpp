#include <iostream>

using namespace std;

int main(void) {

	string input;
	int n = 1, result = 1;

	cin >> input;

	for (int i = 1; i < input.size(); i++) {
		
		if (input[i] == '(') {
			n++;
			result++;
		}
		else if (input[i - 1] == '(' && input[i] == ')') {
			n--;
			result--;
			result += n;
		}
		else if (input[i - 1] == ')' && input[i] == ')') {
			n--;
		}
	}

	cout << result;
}
