#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void) {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, temp;
	priority_queue<int, vector<int>, less<int>> q;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		
		if (temp != 0) q.push(temp);
		else {
			if (q.empty()) cout << 0 << "\n";
			else {
				cout << q.top() << "\n";
				q.pop();
			}
		}
	}

	return 0;
}
