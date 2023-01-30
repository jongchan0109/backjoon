#pragma warning(disable:4996)
#include<iostream>
using namespace std;
int gcd(int, int);

int main(void)
{
	int t, n;
	long long sum = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int arr[100];
		sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		for (int j = 0; j < n - 1; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				sum += gcd(arr[j], arr[k]);
			}
		}
		cout << sum << endl;
	}
	return 0;
}

int gcd(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;
	else
		return gcd(num2, num1 % num2);
}