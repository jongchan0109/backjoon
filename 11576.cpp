#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int a, b, m,sum=0,mod=1;
	int arr[20];
	int result[20],len=0;
	cin >> a >> b;
	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr[i];
	for (int i = m - 1; i >= 0; i--) {
		sum += arr[i] * mod;
		mod *= a;
	}
	mod = 1;
	while (sum != 0)
	{
		result[len++] = sum % b;
		sum /= b;
	}
	for (int i = len - 1; i >= 0; i--)
		cout << result[i] << " ";
	return 0;
}