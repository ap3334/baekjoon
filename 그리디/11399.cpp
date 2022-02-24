#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {

  int N, sum = 0;
  int P[1001], wait[1001];
  
  cin >> N;

  P[0] = 0; wait[0] = 0;
  for (int i = 1; i <= N; i++) {
    cin >> P[i];
  }

  sort(P, P + N + 1);

  for (int i = 1; i <= N; i++) {
    wait[i] = P[i] + wait[i - 1];
  } 

  for (int i = 1; i <= N; i++) {
    sum += wait[i];
  }
  
  cout << sum;
  
}
