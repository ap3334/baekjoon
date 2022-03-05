#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long P[1001];

void solve() {

	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;

	for (int i = 5; i < 101; i++) {
		P[i] = P[i - 1] + P[i - 5];
	}
}

int main(void) {

	int T, temp;

	cin >> T;

	solve();

	for (int i = 0; i < T; i++) {
		cin >> temp;
		cout << P[temp] << "\n";
	}
}
