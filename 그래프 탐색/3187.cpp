#include <iostream>

using namespace std;

bool visited[251][251];
string map[251];
int v = 0, k = 0, R, C;

void checking(int r, int c) {

	if (visited[r][c] == true) return;
	if (r >= R || c >= C) return;
	visited[r][c] = true;

	if (map[r][c] == '#') return;
	else if (map[r][c] == 'v') v++;
	else if (map[r][c] == 'k') k++;

	checking(r, c + 1);
	checking(r + 1, c);
	if (c != 0) checking(r, c - 1);
	if (r != 0) checking(r - 1, c);

	return;
}

int main(void) {

	int sheep = 0, wolf = 0;
	
	cin >> R >> C;

	for (int i = 0; i < R; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (visited[i][j] == true) continue;
			v = 0; k = 0;
			checking(i, j);
			if (v < k) sheep += k;
			else wolf += v;
		}
	}

	cout << sheep << " " << wolf;
}
