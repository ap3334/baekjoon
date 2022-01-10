#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> vec[10000];
int cBFS[10000];
int cDFS[10000];


void BFS(int start)
{
	queue<int> q;
	int tmp;

	q.push(start);
	cBFS[start] = 1;
	cout << start << " ";

	while (!q.empty()) {
		tmp = q.front();
		q.pop();
		
		for (int i = 0; i < vec[tmp].size(); i++) {
			if (cBFS[vec[tmp][i]] == 0) {
				q.push(vec[tmp][i]);
				cout << vec[tmp][i] << " ";
				cBFS[vec[tmp][i]] = 1;
			}
		}
	}
}

void DFS(int start)
{
	if (cDFS[start]) return;
	cDFS[start] = 1;
	cout << start << " ";
	
	for (int i = 0; i < vec[start].size(); i++) {
		int y = vec[start][i];
		DFS(y);
	}
}

int main(void)
{
	int N, M, V;
	int tmp1, tmp2;
	cin >> N >> M >> V;
	cin.tie(NULL);
	ios::sync_with_stdio(0);

	for (int i = 0; i < M; i++) {
		cin >> tmp1 >> tmp2;

		vec[tmp1].push_back(tmp2);
		vec[tmp2].push_back(tmp1);
	}

	for (int i = 0; i < M; i++) {
		sort(vec[i].begin(), vec[i].end());
	}

	DFS(V);
	cout << '\n';
	BFS(V);
}
