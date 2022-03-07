#include <iostream>
#include <stack>

using namespace std;


int main()
{
	int K, temp, sum = 0;
	stack<int> s;
	
	cin >> K;

	for (int i = 0; i < K; i++) {

		cin >> temp;

		if (temp == 0 && !s.empty()) {
			s.pop();
		}
		else if (temp != 0) {
			s.push(temp);
		}
	}

	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

}
