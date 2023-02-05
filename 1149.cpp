#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 1000

int min(int, int);

int main(void)
{
	int n,minn;
	int arr[MAX][3];
	int dp[MAX][3];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
	}
	dp[0][0] = arr[0][0];
	dp[0][1] = arr[0][1];
	dp[0][2] = arr[0][2];
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = arr[i][0]+min(dp[i - 1][1], dp[i - 1][2]);
		dp[i][1] = arr[i][1]+min(dp[i - 1][0], dp[i - 1][2]);
		dp[i][2] = arr[i][2]+min(dp[i - 1][0], dp[i - 1][1]);
		
	}
	minn = dp[n - 1][0];
	minn = minn < dp[n - 1][1] ? minn : dp[n - 1][1];
	minn = minn < dp[n - 1][2] ? minn : dp[n - 1][2];

	cout << minn;
	return 0;
}

int min(int a, int b)
{
	if (a > b)
		return b;
	else
		return a;
}

