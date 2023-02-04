#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 1001
int main(void)
{
	int n;
	int arr[MAX];
	int dp[MAX]; // index ��° ���ҷ� �����ϴ� ���� �� �迭�� ����
	int result[MAX];
	int index = 0;
	int rangemax = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	if (n == 1) // ������ ���̰� 1�� ���
	{
		cout << 1 << endl << arr[1] << endl;
	}
	else {
		dp[n] = 1; // ������ ���ҷ� �����ϴ� ���� �� ������ 1
		for (int i = n - 1; i >= 1; i--) // ������ ���� �� ���Һ��� ���� ���
		{
			int max = 0;
			for (int j = i + 1; j <= n; j++) // ���� ���Һ��� n��° ���ұ��� ��
			{
				if (arr[i] < arr[j]) {  // �񱳴�� ���Ұ� ������ ���Һ��� ū ���
					if (dp[j] > max) { // �� ���Ұ� ���� ���� �� ���̸� ���� ���
						max = dp[j];
					}
				}
			}
			dp[i] = max + 1;
			if (dp[i] > rangemax) { // ���� �� ���̸� ���� ���
				index = 0; // index �� 0���� �ʱ�ȭ
				rangemax = dp[i]; // rangemax �ʱ�ȭ
				result[index++] = arr[i]; // ���� ���Ҵ� i
				for (int j = i + 1; j <= n; j++) 
				{
					if (arr[j] > arr[i] && dp[j] == dp[i] - index) // �����ϰ�, ���� �� ���̸� ���� �� �ִ� ���
						result[index++] = arr[j];
				}
			}
		}
		cout << rangemax << endl;
		for (int i = 0; i < index; i++)
			cout << result[i] << " ";
	}
	return 0;
}