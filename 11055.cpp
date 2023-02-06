#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int max(int a, int b);

int main(void)
{
	int n;
	int arr[1001];
	int dp[1001];
	int result;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	dp[1] = arr[1];
	dp[2] = arr[2] > arr[1] ? arr[2] + dp[1] : arr[2];

	for (int i = 3; i <= n; i++)
	{
		int ma = 0;
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j])
				ma = max(ma, dp[j]);
		}
		dp[i] = arr[i] + ma;
	}
	result = dp[1];
	for (int i = 2; i <= n; i++)
		result = max(result, dp[i]);
	cout << result;
	return 0;
}

int max(int a, int b)
{
	int result = a > b ? a : b;
	return result;
}