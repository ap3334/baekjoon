#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main(void) {

	int N, K;
	string number = "";
	string temp;

	cin >> N >> K;

	int num = 0;
	for (int i = 1; i <= N; i++) {
		if (num >= K) break;
		temp = to_string(i);
		num += temp.length();
	}

	if (num < K) cout << -1;
	else cout << temp[temp.length() - (num - K) - 1];
}