#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000

using namespace std;


int main(void) {

  vector<int> cnt;
  int N;
  int min[3];

  cin >> N;

  cnt.push_back(0);
  cnt.push_back(0);
  cnt.push_back(1);
  cnt.push_back(1);

  for (int i = 4; i <= N; i++) {
    min[0] = cnt[i - 1];
    min[1] = INF; min[2] = INF;

    if (i % 2 == 0) min[1] = cnt[i / 2];
    if (i % 3 == 0) min[2] = cnt[i / 3];
    
    sort(min, min + 3);

    cnt.push_back(min[0] + 1);
  }

  cout << cnt[N];
  
}
