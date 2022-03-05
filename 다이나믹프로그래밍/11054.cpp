#include <iostream>
#include <algorithm> 

using namespace std;

int main()
{

	int n, m = -1;
	int dp1[1000];
	int arr[1000];
	int dp2[1000];
	int sum[1000];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}




	for (int i = 0; i < n; i++)
	{
		dp1[i] = 0;
		dp2[n - i - 1] = 0;

		for (int j = 0; j < i; j++)
		{
			if (arr[i] > arr[j])
			{
				dp1[i] = max(dp1[i], dp1[j] + 1);
			}

			if (arr[n - i - 1] > arr[n - j - 1])
			{
				dp2[n - i - 1] = max(dp2[n - i - 1], dp2[n - j - 1] + 1);
			}

		}
	}

	for (int i = 0; i < n; i++) {
		sum[i] = dp1[i] + dp2[i] + 1;
		if (m < sum[i]) m = sum[i];
	}

	cout << m;
}
