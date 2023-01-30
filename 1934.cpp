#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int min(int, int);
int max(int, int);

int main(void)
{
	int n, num1, num2, result;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num1 >> num2;
		result = min(num1, num2);
		cout << result << endl;
	}
	return 0;
}

int max(int num1, int num2) // 재귀함수 이용
{
	if (num1 % num2 == 0)
		return num2;
	else {
		return max(num2, num1 % num2);
	}
}
int min(int num1, int num2) // 최소공배수 = 두수의 곱/ 최대공약수
{
	return (num1 * num2) / max(num1, num2);
}