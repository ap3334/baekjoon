#include <iostream>
#include <unordered_set>

using namespace std;

int main(void) {

	int map[101][101];
	int N;
	const int INF = 1000;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			if (map[i][j] == 0) map[i][j] = INF;
		}
	}
  
	for (int k = 0; k < N; k++) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (map[i][j] > map[i][k] + map[k][j]) 
					map[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == INF) cout << 0 << " ";
			else cout << 1 << " ";
		}
		cout << "\n";
	}


}

