#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	int n, temp, min = 100000000;
	vector<int> num;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		num.push_back(temp);
	}

	for (int i = 0; i < num.size(); i++) {
		if (min > num[i]) min = num[i];
	}

	for (int i = 1; i <= min; i++) {
		if (n == 2) {
			if (num[0] % i == 0 && num[1] % i == 0) cout << i << "\n";
		}
		else {
			if (num[0] % i == 0 && num[1] % i == 0 && num[2] % i == 0) cout << i << "\n";
		}
	}

}
