#include <iostream>

using namespace std;

bool number[1001];

int main(void) {

  int N, K, cnt = 0, result;

  cin >> N >> K;
  
  for (int i = 2; i <= N; i++) {
    if (number[i] == false) {
      for (int j = 1; j * i <= N; j++) {
        if (number[j * i] == false) {
          number[j * i] = true;
          cnt++;
          if(cnt == K) {
            cout << j * i;
            return 0;
          }
        }
      }
    }
  }
}
