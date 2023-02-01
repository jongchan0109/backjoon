#pragma warning(disable:4996)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(void)
{
	string str = "";
	int n, b,mod;
	cin >> n >> b;

	while (n != 0)
	{
		mod = n % b;
		if (mod >= 0 && mod <= 9)
			str += mod + '0';
		else
			str += mod + 'A'-10;
		n /= b;
	}
	reverse(str.begin(), str.end());
	cout << str << endl;
	return 0;
}