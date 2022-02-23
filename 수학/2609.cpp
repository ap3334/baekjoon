#include <iostream>

using namespace std;

int gcd(int a, int b) {
	int c = a % b;
	while (c != 0) {
		a = b;
		b = c;
		c = a % b;
	}
	return b;
}

int lcm(int a, int b, int g) {
	return (a * b) / g;
}

int main(void) {

  int A, B, g, l;

  cin >> A >> B;

  g = gcd(A, B);
  l = lcm(A, B, g);

  cout << g << " " << l;
}
