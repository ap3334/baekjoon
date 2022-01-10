#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

bool visited[10001];
vector<int> trust[10001];
int N, M, temp1, temp2, cnt;
vector<int> computer;

void doHacking(int start) {

	visited[start] = true;

	for (int i = 0; i < trust[start].size(); i++) {
		
		int next = trust[start][i];
		
		if (visited[next] == false) {
			cnt++;
			doHacking(next);
		}

	}

}

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		cin >> temp1 >> temp2;

		trust[temp2].push_back(temp1);
	}

	int max = 0;

	for (int i = 1; i <= N; i++) {
		
		memset(visited, false, sizeof(visited));
		cnt = 0;

		doHacking(i);

		if (max == cnt) {
			computer.push_back(i);
		}
		else if (max < cnt) {
			max = cnt;
			computer.clear();
			computer.push_back(i);
		}
	}

	sort(computer.begin(), computer.end());

	for (int i = 0; i < computer.size(); i++) {
		cout << computer[i] << " ";
	}
}
