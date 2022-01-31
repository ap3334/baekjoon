#include <iostream>
#include <vector>

using namespace std;

int main() {

  vector<int> S;
  int N, K, temp;

  cin >> N >> K;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    S.push_back(temp);
  }

  int left = 0;
  while(S[left] % 2 != 0 && left < N) left++;
  int right = left + 1;
  int cnt;

  if (left == N) cnt = 0;
  else cnt = 1;
  int max = cnt;

  // cout << left << right;

  while(right < N) {

    if (S[right] % 2 == 0) {
      cnt++;
      right++;
    }
    else if (K > 0) {
      K--;
      right++;
    }
    else if (K == 0) {
      if (S[left] % 2 == 1) K++;
      if (S[left] % 2 == 0) cnt--;
      left++;
    }

    if (cnt > max) max = cnt;

  }

  cout << max;

}
