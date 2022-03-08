#include <iostream>
#include <vector>

using namespace std;

void print(int a, int b) {
	cout << a << "/" << b << "\n";
}

int main()
{
	int N, first, num, a, b, c, temp;

	cin >> N >> first;

	for (int i = 0; i < N - 1; i++) {
		cin >> temp;
		if (first % temp == 0) print(first / temp, 1);
		else {
			a = first;
			b = temp;
			
			while (1) {
				c = a % b;
				if (c == 0) {
					num = b;
					break;
				}
				a = b;
				b = c;
			}

			print(first / num, temp / num);
		}
	}
	
}
