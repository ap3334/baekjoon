#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

int number[100001];

int main(void) {

	int n, m = -1001;

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> number[i];
	}

	for (int i = 1; i <= n; i++) {
		number[i] = max(number[i], number[i - 1] + number[i]);
		if (m < number[i]) m = number[i];
	}

	cout << m;
	
}
