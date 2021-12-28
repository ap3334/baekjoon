#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float ability[101][101];

bool standard(float a, float b) {
	return a > b;
}

int main(void) {

	int N, M, K, person;
	float max, sum = 0;
	vector<float> abilities;

	cin >> N >> M >> K;

	for (int i = 1; i <= M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> person;
			cin >> ability[person][i];
		}
	}

	for (int i = 1; i <= N; i++) {
		max = *max_element(ability[i] + 1, ability[i] + M + 1);
		abilities.push_back(max);
	}

	sort(abilities.begin(), abilities.end(), standard);

	for (int i = 0; i < K; i++) {
		sum += abilities[i];
	}

	cout << fixed;
	cout.precision(1);
	cout << sum;
}
