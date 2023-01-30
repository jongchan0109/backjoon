#pragma warning(disable:4996)
#include<iostream>
#define MAX 100000
using namespace std;
int gcd(int, int);
int main(void)
{
	int n, s;
	int arr[MAX];
	int gc[MAX];
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > s)
			arr[i] = arr[i] - s;
		else
			arr[i] = s - arr[i];
	}
	int mi = arr[0];
	for (int i = 1; i < n; i++)
	{
		mi = gcd(mi, arr[i]);
	}
	cout << mi;
	return 0;
}

int gcd(int num1, int num2)
{
	if (num1 % num2 == 0)
		return num2;
	else
		return gcd(num2, num1 % num2);
}