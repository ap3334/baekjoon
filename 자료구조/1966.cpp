#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

bool des(int a, int b) {
	return a > b;
}

int main(void) {

	int T, N, M, temp, num;
	vector<int> sorted;
	queue<pair<int, bool>> q;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N >> M;

		for (int j = 0; j < N; j++) {
			cin >> temp;
			
			sorted.push_back(temp);
			
			if (j == M) q.push(make_pair(temp, true));
			else q.push(make_pair(temp, false));
		}

		sort(sorted.begin(), sorted.end(), des);

		num = 0;
		while (1) {
			if (sorted[num] == q.front().first) {
				num++;
				if (q.front().second == true) {
					cout << num << "\n";
					break;
				}
				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}

		sorted.clear();
		
		while (!q.empty()) {
			q.pop();
		}
	}
}
