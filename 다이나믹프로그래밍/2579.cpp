#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int stair[501];
int dp[501];

int main(void) {

	int n, temp;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> stair[i];
	}

	dp[1] = stair[1];
	dp[2] = stair[1] + stair[2];

	for (int i = 3; i <= n; i++) {
		dp[i] = max(stair[i] + stair[i - 1] + dp[i - 3], stair[i] + dp[i - 2]);
	}

	cout << dp[n];
}
