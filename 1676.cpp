#pragma warning(disable:4996)
#include<iostream>
using namespace std;


int main(void)
{
	int num;
	int  cnt=0;
	cin >> num;

	cnt = num / 5;
	if (num >= 125)
		cnt += num/125;
	if (num >= 25)
		cnt += num/25;
	cout << cnt;
	return 0;
}

