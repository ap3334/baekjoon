#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	
	ios::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N, M, temp;
	vector<int> A, B;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		A.push_back(temp);
	}
	for (int i = 0; i < M; i++) {
		cin >> temp;
		B.push_back(temp);
	}

	int a = 0, b = 0;

	for (int i = 0; i < N + M; i++) {
		if (a == N || b == M) break;
		else if (A[a] > B[b]) {
			cout << B[b] << " ";
			b++;
		}
		else {
			cout << A[a] << " ";
			a++;
		}
	}

	while (a != N) {
		cout << A[a] << " ";
		a++;
	}
	while (b != M) {
		cout << B[b] << " ";
		b++;
	}

}
