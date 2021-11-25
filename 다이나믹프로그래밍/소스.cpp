#include <iostream>
#include <vector>

using namespace std;

long long c[31][31];

int main(void) {

	int T, N, M;
	
	cin >> T;

	c[1][0] = 1;
	c[1][1] = 1;
	for (int i = 2; i < 31; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) c[i][j] = 1;
			else {
				c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
			}
		}
	}
	
	for (int i = 0; i < T; i++) {
		cin >> N >> M;

		cout << c[M][N] << "\n";
	}
	
}