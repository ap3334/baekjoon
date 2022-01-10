#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N, T, max, min, temp;

	cin >> T;

	for (int i = 0; i < T; i++) {
		max = -1000000;
		min = 1000000;

		cin >> N;

		for (int j = 0; j < N; j++) {
			cin >> temp;
			if (max < temp) max = temp;
			if (min > temp) min = temp;
		}

		cout << min << " " << max << "\n";

	}

}
