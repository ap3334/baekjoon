#include <iostream>
#include <deque>
#include <vector>

using namespace std;


int main()
{
	deque<int> d;
	int N, M, target, index = 0, cnt = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		d.push_back(i);
	}

	for (int i = 0; i < M; i++) {

		cin >> target;

		for (int j = 0; j < d.size(); j++) {
			if (d[j] == target) {
				index = j;
				break;
			}
		}

		if (index <= d.size() / 2) {

			for (int j = 0; j < index; j++) {
				d.push_back(d.front());
				d.pop_front();
				cnt++;
			}

			d.pop_front();
		}
		else {
			for (int j = 0; j < d.size() - index; j++) {
				d.push_front(d.back());
				d.pop_back();
				cnt++;
			}


			d.pop_front();

		}

	}

	cout << cnt;
}
