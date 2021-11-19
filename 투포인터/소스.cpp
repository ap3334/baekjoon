#include <iostream>
#include <vector>

using namespace std;

int main(void) {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, temp;
	vector<int> vec, sum;

	cin >> N >> M;

	vec.push_back(0);
	for (int i = 1; i < N + 1; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	sum.push_back(0);
	for (int i = 1; i < N + 1; i++) {
		sum.push_back(sum[i - 1] + vec[i]);
	}
	
	int tempi, tempj;
	for (int i = 1; i < M + 1; i++) {
		cin >> tempi >> tempj;
		cout << sum[tempj] - sum[tempi - 1] << "\n";
	}
}