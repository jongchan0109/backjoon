#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int swap, ave, m, sum = 0;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	ave = sum / 5;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[i] > arr[j])
			{
				swap = arr[i];
				arr[i] = arr[j];
				arr[j] = swap;
			}
		}

	}
	m = arr[2];
	cout << ave << endl << m;
	return 0;
}