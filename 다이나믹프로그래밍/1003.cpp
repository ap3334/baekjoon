#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int zero[41], one[41];

void fibonacci() {
	
	zero[0] = 1; one[1] = 1;

	for (int i = 2; i < 41; i++) {
		zero[i] = zero[i - 1] + zero[i - 2];
		one[i] = one[i - 1] + one[i - 2];
	}
}

int main(void) {

	int T, temp;

	cin >> T;

	fibonacci();

	for (int i = 0; i < T; i++) {

		cin >> temp;

		cout << zero[temp] << " " << one[temp] << "\n";
	}

}
