#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int isgold(int);

int main(void)
{
	int t,num,result;
	cin >> t;
	for (int x = 0; x < t; x++)
	{
		cin >> num;
		result = isgold(num);
		cout << result << endl;
	}
}

int isgold(int n)
{
	int num1, num2,cnt=0;
	num1 = num2 = n/2;
	if (n <= 1)
		return 0;
	bool* arr = new bool[n + 1];

	arr[1] = false;
	for (int i = 2; i <= n; i++)
		arr[i] = true;
	for (int i = 2; i * i <= n; i++)
	{
		if (arr[i])
			for (int j = i * i; j <= n; j += i) {
				arr[j] = false;
			}
	}
	while (num1 != 0)
	{
		if (arr[num1] && arr[num2]) {
			cnt++;
		}
		num1 -= 1;
		num2 += 1;
	}
	return cnt;
}