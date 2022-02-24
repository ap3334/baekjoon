#include <iostream>
#include <vector>
#include <map>
#include <math.h>

using namespace std;

vector<int> tree;

void inorder(int start, int N) {
  if (start >= N) return;

  inorder(start * 2 + 1, N);
  tree.push_back(start);
  inorder(start * 2 + 2, N);
}

int main(void) {

  int K, N, temp;
  map<int, int> building;
  
  cin >> K;

  N = pow(2, K) - 1;

  inorder(0, N);

  for (int i = 0; i < N; i++) {
    cin >> temp;
    building[tree[i]] = temp;
  }

  int n = 0;
  for (int i = 0; i < K; i++) {
    for (int j = 0; j < pow(2, i); j++) {
      cout << building[n] << " ";
      n++;
    }
    cout << "\n";
  }
}
