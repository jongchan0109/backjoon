#pragma warning(disable:4996)
#include<iostream>
using namespace std;

void star(int n,int row,int col);
char arr[2188][2188];
int main(void)
{
	int n; cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = '*';
	star(n,0,0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << arr[i][j];
		cout << endl;
	}
	return 0;
}

void star(int n,int row,int col)
{
	if (n == 1)
		return;
	else
	{
		for (int i = n/3+row; i < 2*n/3+row; i++)
		{
			for (int j = n / 3+col; j < 2 * n / 3+col; j++)
				arr[i][j] = ' ';
		}
		for (int i = 0; i < n; i += n / 3) {
			for (int j = 0; j < n; j += n / 3)
				star(n / 3, i+row, j+col);
		}
	}
		
}