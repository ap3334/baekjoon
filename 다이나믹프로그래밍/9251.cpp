#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int letter[1001][1001];

int main()
{
	string l1, l2;

	cin >> l1 >> l2;

	for (int i = 1; i <= l1.length(); i++)
	{
		for (int j = 1; j <= l2.length(); j++) {
			if (l2[j - 1] == l1[i - 1]) letter[j][i] = letter[j - 1][i - 1] + 1;
			else letter[j][i] = max(letter[j - 1][i], letter[j][i - 1]);
		}
	}

	cout << letter[l2.length()][l1.length()];
}
