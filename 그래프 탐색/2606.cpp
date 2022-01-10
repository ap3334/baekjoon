#include <iostream>
#include <vector>
using namespace std;

vector<int> vec[101];
int c[101];
int num;

void dfs(int start)
{
	if (c[start] == 1) return;
	c[start] = 1;
	num++;

	for (int i = 0; i < vec[start].size(); i++) {
		int y = vec[start][i];
		dfs(y);
	}
}

int main(void)
{
	int N, M, tmp1, tmp2;
	cin >> N >> M;
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	for (int i = 0; i < M; i++) {
		cin >> tmp1 >> tmp2;
		vec[tmp1].push_back(tmp2);
		vec[tmp2].push_back(tmp1);
	}

	dfs(1);
	cout << num - 1;
	
}
