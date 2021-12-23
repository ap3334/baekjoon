#include <iostream>

using namespace std;

int main(void) {

	int A, B, N; 
	int remain, cnt = 1;

	cin >> A >> B >> N;

	remain = A % B;

	while (1) {
		remain *= 10;
		if (cnt == N) {
			cout << remain / B;
			break;
		}
		cnt++;
		remain %= B;
	}
}
