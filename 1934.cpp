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

int max(int num1, int num2) // ����Լ� �̿�
{
	if (num1 % num2 == 0)
		return num2;
	else {
		return max(num2, num1 % num2);
	}
}
int min(int num1, int num2) // �ּҰ���� = �μ��� ��/ �ִ�����
{
	return (num1 * num2) / max(num1, num2);
}