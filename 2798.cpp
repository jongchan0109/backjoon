#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n, num,ans=0,sum;
	int arr[101];
	cin >> n >> num;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 2; i++)
	{
		sum = 0;
		for (int j = i + 1; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum = arr[i] + arr[j] + arr[k];
				if (sum > ans && sum <= num)
					ans = sum;
			}
		}
	}
	cout << ans;
	return 0;
}