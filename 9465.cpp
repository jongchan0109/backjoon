#pragma warning(disable:4996)
#include<iostream>
#define MAX 100
using namespace std;
int max(int a, int b);
int main(void)
{
	int t,n;
	cin >> t;
	for (int x = 0; x < t; x++)
	{
		int arr[MAX][2];
		int dp[MAX][2];
		cin >> n;
		for (int i = 0; i < n; i++)
			cin >> arr[i][0];
		for (int i = 0; i < n; i++)
			cin >> arr[i][1];
		dp[0][0] = arr[0][0];
		dp[0][1] = arr[0][1];
		dp[1][0] = arr[1][0] + arr[0][1];
		dp[1][1] = arr[1][1] + arr[0][0];
		for (int i = 2; i < n; i++)
		{
			dp[i][0] = max(max(dp[i - 2][0] , dp[i - 2][1]) + arr[i][0], dp[i - 1][1] + arr[i][0]);
			dp[i][1] = max(max(dp[i - 2][0] , dp[i - 2][1]) + arr[i][1], dp[i - 1][0] + arr[i][1]);

		}
		cout << max(dp[n-1][0], dp[n-1][1]) << endl;
	}
	
	return 0;
}

int max(int a, int b)
{
	int result;
	result = a > b ?  a :  b;
	return result;
}