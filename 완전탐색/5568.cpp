#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int n, k;
int card[11];
unordered_map<string, int> m;

void permutation(int depth) {

	if (depth == k) {
		string temp;
		
		for (int i = 0; i < k; i++) {
			if (card[i] < 10) temp += card[i] + '0';
			else {
				temp += (card[i] / 10) + '0';
				temp += (card[i] % 10) + '0';
			}
		}
		m[temp]++;

		return;
	}

	for (int i = depth; i < n; i++) {
		swap(card[depth], card[i]);
		permutation(depth + 1);
		swap(card[depth], card[i]);
	}
}

int main(void) {

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> card[i];
	}

	permutation(0);
	
	cout << m.size();
}
