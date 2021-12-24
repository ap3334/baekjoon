#include <iostream>

using namespace std;

bool map[1001][1001];
bool visited[1001];
int N, M, cnt = 0;

void dfs(int start) {

	visited[start] = true;

	for (int i = 1; i <= N; i++) {
		if (map[start][i] == true && visited[i] == false) dfs(i);
	}
}

int main(void) {
	
	int temp1, temp2;

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> temp1 >> temp2;
		map[temp1][temp2] = true;
		map[temp2][temp1] = true;
	}

	for (int i = 1; i <= N; i++) {
		if (visited[i] == true) continue;
		dfs(i);
		cnt++;
	}

	cout << cnt;
}
