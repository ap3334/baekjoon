#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

int main(void) {

  map<string, int> trees;
  string temp;
  double cnt = 0;

  while(getline(cin, temp)) {
    trees[temp]++;
    cnt++;
  }

  cout << fixed;
  cout.precision(4);

  for (auto i : trees) {
    cout << i.first << " " << (i.second / cnt) * 100 << "\n";
  }

}
