#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	int A, B, C, M;
	int num = 0, tired = 0;

	cin >> A >> B >> C >> M;

	for (int i = 0; i < 24; i++) {
		if (tired + A <= M) {
			tired += A;
			num++;
		}
		else {
			tired -= C;
			if (tired < 0) tired = 0;
		}
	}

	cout << num * B;
}
