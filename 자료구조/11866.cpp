#include <iostream>
#include <queue>
#include <vector>

using namespace std;


int main()
{
	int N, K;
	queue<int> q;
	vector<int> print;

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	while (!q.empty()) {
		for (int i = 0; i < K - 1; i++) {
			q.push(q.front());
			q.pop();
		}

		print.push_back(q.front());
		q.pop();
	}

	cout << "<";
	for (int i = 0; i < print.size(); i++) {
		cout << print[i];
		if (i != N - 1) cout << ", ";
		else cout << ">";
	}

}
