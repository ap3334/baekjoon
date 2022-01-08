#include <iostream>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int num5, num2, temp;


	cin >> n;

	num5 = n / 5;
	temp = n % 5;

	while (temp % 2 != 0) {
		
		if (num5 == 0) {
			cout << -1;
			return 0;
		}

		num5--;
		temp += 5;
	}

	num2 = temp / 2;

	cout << num5 + num2;

	return 0;
}
