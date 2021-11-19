#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, X, temp, max, cnt;
	vector<int> visitor, sum;

	cin >> N >> X;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		visitor.push_back(temp);
	}

	temp = 0;
	for (int i = 0; i < X; i++) {
		temp += visitor[i];
	}
	sum.push_back(temp);
	max = temp;
	cnt = 1;

	for (int i = 1; i < N - X + 1; i++) {
		sum.push_back(sum[i - 1] - visitor[i - 1] + visitor[i + X - 1]);
		if (max < sum[i]) {
			max = sum[i];
			cnt = 1;
		}
		else if (max == sum[i]) cnt++;
	}

	if (max == 0) cout << "SAD";
	else cout << max << "\n" << cnt;
}
