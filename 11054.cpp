#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int max(int, int);
int main(void)
{
	int n;
	int arr[1001];
	int dp1[1001];//증가하는 경우
	int dp2[1001]; // 감소하는 경우
	int result;

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp1[1] = 1;
	dp1[2] = arr[2] > arr[1] ? 2 : 1;
	dp2[n] = 1;
	dp2[n-1] = arr[n] < arr[n-1] ? 2 : 1;

	for (int i = 3; i <= n; i++)
	{
		int ma = 0;
		for (int j = 1; j < i; j++)
		{
			if (arr[i] > arr[j])
				ma = max(ma, dp1[j]);
		}
		dp1[i] = ma+1;
	}
	for (int i = n - 2; i >= 1; i--)
	{
		int ma = 0;
		for (int j = i + 1; j <= n; j++)
		{
			if (arr[j] < arr[i])
				ma = max(ma, dp2[j]);
		}
		dp2[i] = ma+1;
	}
	result = dp1[1] + dp2[1];
	for (int i = 2; i <= n; i++)
		result = max(result, dp1[i] + dp2[i]);
	cout << result - 1;
	return 0;
}

int max(int a, int b)
{
	int result = a > b ? a : b;
	return result;
}