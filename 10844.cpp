#pragma warning(disable:4996)
#include<iostream>
#define MOD 1000000000
using namespace std;

int main(void)
{
	int n;
	long long sum = 0;
	long long dp[101][10];
	cin >> n;
	for (int i = 0; i <= 9; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][1];
		dp[i][1] = (dp[i - 1][2]+dp[i-1][0])%MOD;
		for (int j = 2; j <= 8; j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1])%MOD;
		}
		dp[i][9] = dp[i - 1][8];
	}
	for (int i = 1; i <= 9; i++) {
		sum += dp[n][i];
		sum%= MOD;
	}
	cout << sum;
	return 0;
}