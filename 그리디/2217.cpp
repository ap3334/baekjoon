#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  int N, temp, max = 0;
  vector<int> lope;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> temp;
    lope.push_back(temp);
  }

  sort(lope.begin(), lope.end());

  for(int i = 0; i < N; i++) {
    if (max < lope[i] * (N - i)) max = lope[i] * (N - i);
  }

  cout << max;
}
