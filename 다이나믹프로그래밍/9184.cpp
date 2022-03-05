#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int abc[21][21][21];

int solve(int a, int b, int c) {

	if (a <= 0 || b <= 0 || c <= 0) return 1;

	if (a > 20 || b > 20 || c > 20) return solve(20, 20, 20);
	
	if (abc[a][b][c]) return abc[a][b][c];

	if (a < b && b < c) {
		abc[a][b][c] = solve(a, b, c - 1) + solve(a, b - 1, c - 1) - solve(a, b - 1, c);
		return abc[a][b][c];
	}

	abc[a][b][c] = solve(a - 1, b, c) + solve(a - 1, b - 1, c) + solve(a - 1, b, c - 1) - solve(a - 1, b - 1, c - 1); 
	return abc[a][b][c];

}

int main(void) {

	int a, b, c, result;

	while (1) {
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1) return 0;

		result = solve(a, b, c);

		cout << "w(" << a << ", " << b << ", " << c << ") = " << result << "\n";
	}
}
