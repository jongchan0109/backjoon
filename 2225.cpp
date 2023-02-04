#pragma warning(disable:4996)
#include<iostream>
#define MOD 1000000
using namespace std;

int combination(int, int);

int main(void)
{
	int n, k;
	int result;
	cin >> n >> k;
	
	result = combination(n + k - 1, k - 1);
	cout << result << endl;
	return 0;
}

int combination(int a, int b)
{
	static int dp[400][201] = { 0 };
	if (dp[a][b] != 0)
		return dp[a][b];
	if (a == b || b == 0||a==1)
		return 1;
	else
	{
		dp[a][b] = combination(a - 1, b - 1) + combination(a - 1, b);
		return dp[a][b];
	}
}