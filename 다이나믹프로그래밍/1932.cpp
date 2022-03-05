#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int color[501][501];

int main(void) {

	int n, m = 0;

	cin >> n;


	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cin >> color[i][j];

			color[i][j] += max(color[i - 1][j - 1], color[i - 1][j]);
		}
	}

	for (int i = 1; i <= n; i++) {
		if (m < color[n][i]) m = color[n][i];
	}

	cout << m;
}
