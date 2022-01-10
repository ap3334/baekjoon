#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100001;


bool visited[MAX];
int parentNode[MAX];
vector<int> node[MAX];

void findParentNode(int start) {

	visited[start] = true;

	for (int i = 0; i < node[start].size(); i++) {

		int next = node[start][i];

		if (visited[next] == false) {
			parentNode[next] = start;
			findParentNode(next);
		}


	}
}

int main(void) {

	int N, temp1, temp2;

	cin >> N;

	for (int i = 0; i < N - 1; i++) {
		cin >> temp1 >> temp2;

		node[temp1].push_back(temp2);
		node[temp2].push_back(temp1);
	}

	findParentNode(1);

	for (int i = 2; i <= N; i++) cout << parentNode[i] << "\n";
}
