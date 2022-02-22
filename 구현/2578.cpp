#include <iostream>
#include <unordered_map>

using namespace std;

int weight[5];
int height[5];
int cross[2];

int main(void) {

  int n, bingo = 0, temp, x, y;
  unordered_map<int, int> m;

  for (int i = 0; i < 25; i++) {
    cin >> temp;
    m[temp] = i;
  }

  for (int i = 1; i <= 25 ; i++) {
    cin >> n;
    temp = m[n];
    x = temp / 5; y = temp % 5;

    weight[x]++; height[y]++;
    if (x == y) cross[0]++;
    if (x == 4 - y) cross[1]++;

    if (weight[x] == 5)  {
      bingo++;
      weight[x] = 0;
    }
    if (height[y] == 5) {
      bingo++;
      height[y] = 0;
    }
    if (cross[0] == 5) {
      bingo++;
      cross[0] = 0;
    }
    if (cross[1] == 5) {
      bingo++;
      cross[1] = 0;
    }

    if (bingo >= 3) {
      cout << i;
      return 0;
    }
  }
  
}
