#include <iostream>

using namespace std;

int main(void) {

  int N, K, temp, i, cnt = 0;
  int coin[10];

  cin >> N >> K;

  for (i = 0; i < N; i++) {
    cin >> coin[i];
  }

  for (i = 0; i < N; i++) {
    if (K / coin[i] == 0) break;
  }

  i--;

  while (i != -1) {
    cnt += K / coin[i];
    K -= (K / coin[i]) * coin[i];
    i--;
  }

  cout << cnt;
}
