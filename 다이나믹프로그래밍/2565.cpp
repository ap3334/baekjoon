#include <iostream>
#include <algorithm> 
#include <vector>

using namespace std;

int main()
{

	int n, temp1, temp2, m = 0;
	vector<pair<int, int>> v;
	int dp[101];
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> temp1 >> temp2;
		v.push_back(make_pair(temp1, temp2));
	}

	sort(v.begin(), v.end());


	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (v[i].second > v[j].second)
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		if (m < dp[i]) m = dp[i];
	}

	cout << n - m;
}
