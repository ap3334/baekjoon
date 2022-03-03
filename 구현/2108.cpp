#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void) {

	double avg, sum = 0;
	int N, max, min, temp, index = 0, cnt = 1;
	map<int, int> m;
	vector<int> number;

	cin >> N;

	for (int i = 0; i < N; i++) {

		cin >> temp;
		m[temp]++;
		number.push_back(temp);
		sum += temp;

	}

	sort(number.begin(), number.end());

	cout << fixed;
	cout.precision(0);
	avg = round(sum / N);
	if (avg == -0) avg = 0;
	cout << avg << "\n";

	cout << number[N / 2] << "\n";

	temp = 0;
	for (auto i : m) {

		if (temp < i.second) {
			temp = i.second;
			index = i.first;
			cnt = 1;
		}
		else if (temp == i.second) {
			cnt++;
			if (cnt == 2) {
				index = i.first;
			}
		}

	}

	cout << index << "\n";

	min = number[0];
	max = number[N - 1];

	cout << max - min << "\n";

}
