#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {

	int N, M, max_index, num = 0;
	vector<string> dna;
	string temp;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> temp;
		dna.push_back(temp);
	}

	// A -> C -> G -> T
	for (int i = 0; i < M; i++) {

		vector<int> hd{ 0, 0, 0, 0 };

		for (int j = 0; j < N; j++) {
			if (dna[j][i] == 'A') hd[0]++;
			else if (dna[j][i] == 'C') hd[1]++;
			else if (dna[j][i] == 'G') hd[2]++;
			else if (dna[j][i] == 'T') hd[3]++;
		}

		max_index = max_element(hd.begin(), hd.end()) - hd.begin();

		if (max_index == 0) cout << 'A';
		else if (max_index == 1) cout << 'C';
		else if (max_index == 2) cout << 'G';
		else cout << 'T';

		num += N - hd[max_index];
		hd.clear();
	}

	cout << "\n" << num;
}
