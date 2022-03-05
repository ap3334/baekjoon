#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int wine[10001];
long long dp[10001];

int main(void) {

	int n;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> wine[i];
	}

	dp[1] = wine[1];
	dp[2] = wine[1] + wine[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(wine[i] + wine[i - 1] + dp[i - 3], max(wine[i] + dp[i - 2], dp[i - 1]));
	}

	cout << dp[n];
}
