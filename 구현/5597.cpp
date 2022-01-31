#include <iostream>

using namespace std;

bool student[31];

int main() {

  int temp;

  for (int i = 1; i <= 28; i++) {
    cin >> temp;
    student[temp] = true;
  }

  for (int i = 1; i <= 30; i++) {
    if (student[i] == false) cout << i << "\n";
  }
  

}
