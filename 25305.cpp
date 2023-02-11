#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int swap,n, k; cin >> n >> k;
	int arr[1001];
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
	cout << arr[k - 1];
	
	return 0;
}