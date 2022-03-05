#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long tile[1000001];

void solve(int n) {

	tile[1] = 1; tile[2] = 2;

	int i = 3;
	while (i <= n) {
		tile[i] = (tile[i - 1] + tile[i - 2]) % 15746;
		i++;
	}
}

int main(void) {

	int N;

	cin >> N;

	solve(N);

	cout << tile[N];
}
