#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int arr[9];
	int tmp;
	int idx1=0, idx2=0;
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = i + 1; j < 9; j++)
		{
			if (sum - arr[i] - arr[j] == 100)
			{
				idx1 = i;
				idx2 = j;
				break;
			}
		}
		if (idx1 != 0)
			break;
	}
	for (int i = 0; i < 9; i++)
	{
		if (i == idx1 || i == idx2)
			continue;
		cout << arr[i] << endl;
	}
	return 0;
}