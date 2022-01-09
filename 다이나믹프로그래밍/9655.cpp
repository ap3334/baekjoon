#include <iostream>

using namespace std;

int main(void) {
	
	int N, index = 0;
	string name[2] = { "SK", "CY" };
	
	cin >> N;

	while (N != 0) {

		if (N >= 3) N -= 3;
		else N -= 1;

		index++;

	}

	cout << name[++index % 2];

}
