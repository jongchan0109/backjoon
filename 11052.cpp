#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int p[1001];
	int dp[1001];
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> p[i];
	}
	dp[1] = p[1];

	for (int i = 2; i <= n; i++)
	{
		int max = p[i]; // 한장의 카드팩만 구매하는 경우
		for (int j = 1; i>=2*j; j++) // (1,n-1),(2,n-2) ~~~(n/2-1,n/2+1) 의 실행만을 위해 범위 설정
		{
			if (dp[j] + dp[i - j] > max) 
				max = dp[j] + dp[i - j];
		}
		dp[i] = max;
	}
	cout << dp[n];
	return 0;
}