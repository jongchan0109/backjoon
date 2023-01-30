#pragma warning(disable:4996)
#include<iostream>
using namespace std;

long long count(int, int);

int main(void)
{
	int num1, num2;
	long long two = 0, five = 0;
	cin >> num1 >> num2;
	two = count(num1, 2) - count(num2, 2) - count(num1 - num2, 2);
	five = count(num1, 5) - count(num2, 5) - count(num1 - num2, 5);
	cout << min(two, five) << endl;
	return 0;
}

long long count(int n, int r)
{
	long long result = 0;
	long long i = r;
	result = n / i;
	i *= r;
	while (1)
	{
		if (i > n)
			break;
		if (n >= i)
			result += n / i;
		i *= r;
	}
	return result;
}