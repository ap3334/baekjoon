#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main(void) {

	int N, K, tmp, start, end, max = 1;
	unordered_map<int, int> m;
	vector<int> sequence;

	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		sequence.push_back(tmp);
	}

	start = 0; end = 1;
	m[sequence[start]]++; 

	while (end != N) {
		
		m[sequence[end]]++;
		
		if (m[sequence[end]] > K) {
			if (max < end - start) max = end - start;
			while (m[sequence[end]] != K) {
				m[sequence[start]]--;
				start++;
			}
		}

		end++;
	}

	if (max < end - start) max = end - start;

	cout << max;


}
