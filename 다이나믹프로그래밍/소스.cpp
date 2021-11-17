#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	long long n;
	vector<long long> pibonachi;

	cin >> n;

	pibonachi.push_back(0);
	pibonachi.push_back(1);

	for (int i = 2; i <= n; i++) {
		pibonachi.push_back(pibonachi[i - 1] + pibonachi[i - 2]);
	}

	cout << pibonachi[n];
}