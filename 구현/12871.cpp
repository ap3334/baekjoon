#include <iostream>

using namespace std;

int main(void) {

	string s, t;
	int max_length;

	cin >> s >> t;

	if (s.length() > t.length()) max_length = s.length();
	else max_length = t.length();

	for (int i = 0; i < 2 * max_length; i++) {
		if (s[i % s.length()] != t[i % t.length()]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;

}
