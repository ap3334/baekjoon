#include <iostream>

using namespace std;

int main(void) {

	int N, sum, part;

	cin >> N;

	for (int i = 1; i < N; i++) {

		sum = i;
		part = i;

		while (part) {
			sum += part % 10;
			part /= 10;
		}

		if (N == sum) {
			cout << i << endl;
			return 0;
		}

	}

	cout << 0 << endl;

	return 0;

}
