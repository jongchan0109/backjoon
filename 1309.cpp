#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 100
#define MOD 9901

int main(void)
{
	int n;
	int dp[MAX][3];
	
	cin >> n;
	dp[0][0] = 1;
	dp[0][1] = 1;
	dp[0][2] = 1;
	for (int i = 1; i < n; i++)
	{
		dp[i][0] = (dp[i - 1][0] + dp[i - 1][1] + dp[i - 1][2])%MOD;// i��° �࿡ ���ڸ� ���� �ʴ� ���
		dp[i][1] = (dp[i - 1][0] + dp[i - 1][2])%MOD;//i��° ĭ�� ���ʿ� ���ڸ� �ִ� ���
		dp[i][2] = (dp[i - 1][1] + dp[i - 1][0])%9901; // i��° ĭ�� �����ʿ� ���ڸ� �ִ� ���
	}
	cout << (dp[n-1][0] + dp[n-1][1] + dp[n-1][2])%MOD << endl;
	return 0;
}