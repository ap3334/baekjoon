#include <iostream>
using namespace std;

int d[21];

int Fibonarch(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;
	if (d[n] != 0) return d[n];
	return d[n] = Fibonarch(n - 1) + Fibonarch(n - 2);
}

int main(void)
{
	int n, num;
	cin >> n;

	num = Fibonarch(n);
	cout << num;

	return 0;
}
