#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 100001
#define MOD 1000000009
int main(void)
{
	long long dp[MAX][4];
	int T,n;
	cin >> T;

	dp[1][1] = 1;
	dp[1][2] = 0;
	dp[1][3] = 0;

	dp[2][1] = 0;
	dp[2][2] = 1;
	dp[2][3] = 0;

	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	while (T--)
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
		{
			dp[i][1] = (dp[i - 1][2] + dp[i - 1][3])%MOD;
			dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
			dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
		}
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % MOD << endl;
	}
	return 0;
}