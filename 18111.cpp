#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int inventory = 0, mintime = 2000000000, row, col,mostheight=0;

	int arr[501][501];
	cin >> row >> col >> inventory;

	for (int i = 0; i < row; i++)
		for (int j = 0; j < col; j++)
			cin >> arr[i][j];
	
	for (int h = 0; h <= 256; h++)
	{
		int bulid = 0;
		int remove = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				int height = arr[i][j] - h;
				if (height > 0) remove += height;
				else if (height < 0) bulid -= height;
			}
		}
		if (remove + inventory >= bulid)
		{
			int time = remove * 2 + bulid;
			if (mintime >= time) {
				mintime = time;
				mostheight = h;
			}
		}
	}
	cout << mintime << " " << mostheight;
	return 0;
}
