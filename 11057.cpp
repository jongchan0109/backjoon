#pragma warning(disable:4996)
#include<iostream>
#define MAX 1001
#define MOD 10007
using namespace std;

int main(void)
{
	int n;
	int dp[MAX][10];
	int result=0;
	cin >> n;
	for (int i = 0; i <= 9; i++)
		dp[1][i] = 1;
	
	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j == 0) {
				dp[i][j] = 1;
				continue;
			}
			dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
		}
	}
	for (int i = 0; i <= 9; i++) {
		result += dp[n][i];
		result %= MOD;
	}
	cout << result;
	return 0;
}