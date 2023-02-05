#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 10001

int max(int, int);

int main(void)
{
	int n;
	int arr[MAX];
	int dp[MAX];
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	dp[3] = 0;
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	
	for (int i = 3; i <= n; i++)
	{
		dp[i] = max(max(dp[i - 3]+arr[i-1]+arr[i], dp[i - 2]+arr[i]),dp[i-1]);
	}
	cout << dp[n];
	return 0;
}

int max(int a, int b)
{
	int result = a > b ? a : b;
	return result;
}