#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<char, int> tree;
unordered_map<int, char> reTree;

void preO(int n) {
  if (reTree[n] == '.') {
    return;
  }
  cout << reTree[n];
  preO(n * 2 + 1);
  preO(n * 2 + 2);
}

void inO(int n) {
  if (reTree[n] == '.') {
    return;
  }
  
  inO(n * 2 + 1);
  cout << reTree[n];
  inO(n * 2 + 2);
}

void postO(int n) {
  if (reTree[n] == '.') {
    return;
  }
  
  postO(n * 2 + 1);
  postO(n * 2 + 2);
  cout << reTree[n];
}

int main(void) {

  int N;
  char temp, R, L;

  cin >> N;

  tree['A'] = 0;
  reTree[0] = 'A';

  for (int i = 0;  i < N; i++) {
    cin >> temp >> L >> R;
    int num = tree[temp];

    
    tree[L] = num * 2 + 1;
    tree[R] = num * 2 + 2;
    
    reTree[num * 2 + 1] = L;
    reTree[num * 2 + 2] = R;
  }

  preO(0);
  cout << "\n";
  inO(0);
  cout << "\n";
  postO(0);


}
