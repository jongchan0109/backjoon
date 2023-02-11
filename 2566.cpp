#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int max=-1, row=0, col=0;
	int arr[10][10];

	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++) {
			cin >> arr[i][j];
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				row = i;
				col = j;
			}
		}
	}
	cout << max << endl;
	cout << row << " " << col;
	return 0;
}