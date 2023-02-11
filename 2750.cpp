#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n,swap; cin >> n;
	int arr[1001];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << arr[i] << endl;
	return 0;
}