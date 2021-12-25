#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	
	int width, height, store_num, temp1, temp2, sum = 0;
	int dong[2];
	vector<pair<int, int>> store;

	cin >> width >> height >> store_num;

	for (int i = 0; i < store_num; i++) {
		cin >> temp1 >> temp2;
		store.push_back(make_pair(temp1, temp2));
	}
	
	cin >> dong[0] >> dong[1];

	for (int i = 0; i < store_num; i++) {
		if (dong[0] == store[i].first) sum += abs(dong[1] - store[i].second);

		else if (dong[0] == 1 || dong[0] == 2) {
			if (store[i].first == 3 || store[i].first == 4) {
				if (store[i].first == 3) sum += dong[1];
				else  sum += width - dong[1];

				if (dong[0] == 1) sum += store[i].second;
				else sum += height - store[i].second;
			}
			else {
				if (height + store[i].second + dong[1] > height + width)
					sum += 2 * (width + height) - (height + store[i].second + dong[1]);
				else
					sum += height + store[i].second + dong[1];
			}
		}

		else {
			if (store[i].first == 1 || store[i].first == 2) {
				if (store[i].first == 1) sum += dong[1];
				else  sum += height - dong[1];

				if (dong[0] == 3) sum += store[i].second;
				else sum += width - store[i].second;

			}
			else {
				if (width + store[i].second + dong[1] > height + width)
					sum += 2 * (width + height) - (width + store[i].second + dong[1]);
				else
					sum += width + store[i].second + dong[1];
			}
		}
	}

	cout << sum;
}
