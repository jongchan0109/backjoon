#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int max(int a, int b);

int main(void)
{
	int n,result;
	int arr[501][501];
	int dp[501][501];
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cin >> arr[i][j];
	}
	dp[1][1] = arr[1][1];
	dp[2][1] = dp[1][1] + arr[2][1];
	dp[2][2] = dp[1][1] + arr[2][2];

	for (int i = 3; i <= n; i++)
	{
		dp[i][1] = dp[i - 1][1] + arr[i][1];
		dp[i][i] = dp[i - 1][i - 1] + arr[i][i];
		for (int j = 2; j <= i - 1; j++)
		{
			dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
		}
		
	}

	result = dp[n][1];
	for (int i = 2; i <= n; i++) {
		if (dp[n][i] > result)
			result = dp[n][i];
	}
	cout << result << endl;
	return 0;
}

int max(int a, int b)
{
	int result = a > b ? a : b;
	return result;
}