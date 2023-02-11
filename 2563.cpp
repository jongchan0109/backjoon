#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int black[101][2];
	int minus=0;
	bool paper[101][101];
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
			paper[i][j] = true;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++) {
			cin >> black[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int x = black[i][0]; x < black[i][0] + 10; x++) {
			for (int y = black[i][1]; y < black[i][1] + 10; y++)
				paper[x][y] = false;
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j])
				minus++;
		}
	}
	
	cout << 10000 - minus;
	return 0;
}