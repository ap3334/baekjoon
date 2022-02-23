#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
  return a > b;
}

int main(void) {

 int N, temp;
 long long total = 0;
 vector<int> tip;

 cin >> N;

 for (int i = 0; i < N; i++) {
   cin >> temp;
   tip.push_back(temp);
 }

  sort(tip.begin(), tip.end(), cmp);

  for (int i = 0; i < N; i++) {
    if (tip[i] - i > 0) total += tip[i] - i;
  }

  cout << total;

}
