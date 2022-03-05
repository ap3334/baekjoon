#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int N, temp;
	vector<int> number, sorted;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		number.push_back(temp);
		sorted.push_back(temp);
	}

	sort(sorted.begin(), sorted.end());

	sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
	
	for (int i = 0; i < N; i++) {

		auto it = lower_bound(sorted.begin(), sorted.end(), number[i]);

		cout << it - sorted.begin() << " ";
	}
}
