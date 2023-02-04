#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int p[1001],dp[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> p[i];
	dp[1] = p[1];
	for (int i = 2; i <= n; i++)
	{
		int min = p[i];
		for (int j = 1; i >= 2 * j; j++)
		{
			if (min > dp[j] + dp[i - j])
				min = dp[j] + dp[i - j];
		}
		dp[i] = min;
	}
	cout << dp[n];
	return 0;
}