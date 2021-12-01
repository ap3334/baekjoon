#include <iostream>

using namespace std;

int main(void) {

	int A, T;
	bool is_degi;
	int bbun = 0, degi = 0, n = -1;

	cin >> A >> T >> is_degi;

	int cnt = 2;
	while (1) {

		for (int i = 0; i < 2; i++) {
			bbun++; n++;
			if (!is_degi && bbun == T) {
				cout << n % A;
				return 0;
			}
			degi++; n++;
			if (is_degi && degi == T) {
				cout << n % A;
				return 0;
			}
		}

		for (int i = 0; i < cnt; i++) {
			bbun++; n++;
			if (!is_degi && bbun == T) {
				cout << n % A;
				return 0;
			}
		}

		for (int i = 0; i < cnt; i++) {
			degi++; n++;
			if (is_degi && degi == T) {
				cout << n % A;
				return 0;
			}
		}

		cnt++;
	}
	
}
