#include <iostream>
#include <vector>

using namespace std;


int main(void) {

  vector<int> price, distance;
  long long result = 0, N, min = 1000000000, temp;

  cin >> N;

  for (int i = 0; i < N - 1; i++) {
    cin >> temp;
    distance.push_back(temp);
  }
  distance.push_back(0);

  for (int i = 0; i < N; i++) {
    cin >> temp;
    price.push_back(temp);
  }

  for (int i = 0; i < N; i++) {
    if (price[i] < min) {
      min = price[i];
    }

    result += min * distance[i];
  }

  cout << result;
}
