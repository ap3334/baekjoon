#include <iostream>
using namespace std;

int main(void) {
	int N, ex1, ex2;
	cin >> N;
	int total = -1;
	int F = 0;
	int T = 0;

	while (1)
	{
		ex1 = N - 5 * F;
		if (ex1 < 0) break;
		ex2 = ex1 / 3;
		if (ex1 % 3 == 0) total = ex2 + F;
		F++;
	}
	
	cout << total;

	return 0;
}
