#include <iostream>
#include <unordered_map>
#include <math.h>

using namespace std;

int main(void) {

  long result = 0;
  int B;
  string N;
  unordered_map<char, int> m;

  for (int i = 1; i < 10; i++) {
    m[i + '0'] = i; 
  }

  for (int i = 'A', tmp = 10; i <= 'Z'; i++, tmp++) {
    m[i] = tmp;
  }

  cin >> N >> B;

  for (int i = 0; i < N.length(); i++) {
    result += m[N[i]] * pow(B, N.length() - i - 1);
  }

  cout << result;
}
