#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int color[1001][3];

int main(void) {

	int N;

	cin >> N;


	for (int i = 1; i <= N; i++) {

		cin >> color[i][0] >> color[i][1] >> color[i][2];

		color[i][0] += min(color[i - 1][1], color[i - 1][2]);
		color[i][1] += min(color[i - 1][0], color[i - 1][2]);
		color[i][2] += min(color[i - 1][0], color[i - 1][1]);
	}

	cout << min(color[N][0], min(color[N][1], color[N][2]));

}
