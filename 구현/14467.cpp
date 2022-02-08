#include <iostream>
#include <unordered_map>

using namespace std;

bool cow[11];

int main(void) {

  int N, first, second, cnt = 0;
  unordered_map<int, int> m;

  cin >> N;

  for(int i = 0; i < N; i++) {
    cin >> first >> second;

    if (cow[first] == false) {
      cow[first] = true;
      m[first] = second;
    } else {
      if (m[first] != second) {
        cnt++;
        m[first] = second;
      }
    }
  }

  cout << cnt;
}
