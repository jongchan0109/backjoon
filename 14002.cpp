#pragma warning(disable:4996)
#include<iostream>
using namespace std;
#define MAX 1001
int main(void)
{
	int n;
	int arr[MAX];
	int dp[MAX]; // index 번째 원소로 시작하는 가장 긴 배열의 길이
	int result[MAX];
	int index = 0;
	int rangemax = 0;
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	if (n == 1) // 수열의 길이가 1인 경우
	{
		cout << 1 << endl << arr[1] << endl;
	}
	else {
		dp[n] = 1; // 마지막 원소로 시작하는 가장 긴 구간은 1
		for (int i = n - 1; i >= 1; i--) // 마지막 원소 전 원소부터 길이 계산
		{
			int max = 0;
			for (int j = i + 1; j <= n; j++) // 현재 원소부터 n번째 원소까지 비교
			{
				if (arr[i] < arr[j]) {  // 비교대상 원소가 현재의 원소보다 큰 경우
					if (dp[j] > max) { // 그 원소가 현재 가장 긴 길이를 가진 경우
						max = dp[j];
					}
				}
			}
			dp[i] = max + 1;
			if (dp[i] > rangemax) { // 가장 긴 길이를 가진 경우
				index = 0; // index 는 0으로 초기화
				rangemax = dp[i]; // rangemax 초기화
				result[index++] = arr[i]; // 시작 원소는 i
				for (int j = i + 1; j <= n; j++) 
				{
					if (arr[j] > arr[i] && dp[j] == dp[i] - index) // 증가하고, 가장 긴 길이를 만들 수 있는 경우
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