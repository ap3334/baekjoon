#include <iostream>
#include <deque>

using namespace std;

int main(void) {

	int N, temp, cnt;
	deque<pair<int, int>> number;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> temp;
		number.push_back(make_pair(i, temp));
	}

	cnt = number.front().second;
	cout << 1 << " ";

	number.pop_front();

	while (!number.empty()) {

		if (cnt > 0) {
			for (int i = 0; i < cnt - 1; i++) {
				number.push_back(number.front());
				number.pop_front();
			}
			cnt = number.front().second;
			cout << number.front().first << " ";
			number.pop_front();
		}
		else {
			for (int i = 0; i > cnt + 1; i--) {
				number.push_front(number.back());
				number.pop_back();
			}
			cnt = number.back().second;
			cout << number.back().first << " ";
			number.pop_back();
		}

	}
}
