#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int dp[31];
	cin >> n;

	dp[2] = 3;
	dp[0] = 1;
	if (n % 2 == 1) {
		cout << 0;
		return 0;
	}
	else {
		for (int i = 4; i <= n; i += 2)
		{
			dp[i] = dp[i - 2] * dp[2];
			for (int j = i - 4; j >= 0; j -= 2)
				dp[i] += (dp[j] * 2);
		}
	}
	cout << dp[n];
	return 0;
}