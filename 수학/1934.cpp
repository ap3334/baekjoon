#include <iostream>
#include <vector>

using namespace std;

int main(void) {

  int T, A, B;

  cin >> T;

  for (int i = 0; i < T; i++) {
    cin >> A >> B;

    int j = 1;

    while (1) {
      if ((A * j) % B == 0) break;
      j++;
    }

    cout << A * j <<"\n";
  }
  
}

