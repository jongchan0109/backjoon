#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 100
int max(int a, int b);
int main(void)
{
	int n,ans;
	int arr[MAX];
	int dp[MAX][2]; // 수를 제거하지 않은 버전
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	ans = arr[1];
	dp[1][0] = arr[1];
	dp[1][1] = arr[1] > 0 ? arr[1] : 0;

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = max(dp[i - 1][0] + arr[i], arr[i]);
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][1] + arr[i]);
		ans = max(ans, max(dp[i][0], dp[i][1]));
	}
	cout << ans << endl;
	return 0;
}

int max(int a, int b)
{
	int result = a > b ? a : b;
	return result;
}