#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int m, n; cin >> m >> n;
	int sum = 0, min = n*n;

	for (int i = m; i <= n; i++)
	{
		for (int j = 1; j * j <= i; j++)
		{
			if (j * j == i) {
				sum += i;
				if (i < min)
					min = i;
			}
		}
	}
	if (sum == 0)
		cout << -1;
	else
		cout << sum <<endl<< min;
	return 0;
}