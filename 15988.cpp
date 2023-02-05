#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 1000001
#define MOD 1000000009
int main(void)
{
	int t,n;
	int dp[MAX];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		for (int i = 4; i <= n; i++)
		{
			dp[i] = ((dp[i - 1] + dp[i - 2])%MOD + dp[i - 3])%MOD;
		}
		cout << dp[n]<<endl;
	}

	return 0;
}