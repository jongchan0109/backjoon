#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	string str;
	int b,sum=0,mod=1;
	cin >> str >> b;
	for (int i = str.size() - 1; i >= 0; i--)
	{
		if (str[i] >= '0' && str[i] <= '9')
			sum += (str[i] - '0') * mod;
		else
			sum += (str[i] - 'A' + 10) * mod;
		mod *= b;
	}
	cout << sum << endl;
	return 0;
}