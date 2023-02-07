#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int num,i,cpy;
	int sum = 0;
	cin >> num;
	
	for (i = 1; i <= num; i++)
	{
		
		sum = i;
		cpy = i;
		while (cpy != 0)
		{
			sum += cpy % 10;
			cpy /= 10;
		}
		if (sum == num)
			break;
	}
	if (i == num + 1)
		cout << 0;
	else
		cout << i;
	return 0;
}