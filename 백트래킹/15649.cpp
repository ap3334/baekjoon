#include <iostream>
#include <vector>
using namespace std;

bool sel[8];
int num[8] = {1, 2, 3, 4, 5, 6, 7, 8};
int N, M;
vector<int> vec;

void PrintVec() {

  for (int i = 0; i < vec.size(); i++)
  {
   cout << vec[i] << " ";
  }

  cout << "\n";
}

void dfs(int cnt) {

  if (cnt == M)
  {
    PrintVec();
    return;
  }

  for (int i = 0; i < N; i++) {
    if (sel[i] == true) continue;

    sel[i] = true;
    vec.push_back(num[i]);
    dfs(cnt + 1);
    vec.pop_back();
    sel[i] = false;
  }
}

int main() {
  
  cin >> N >> M;

  dfs(0);

}
