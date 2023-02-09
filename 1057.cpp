#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n; cin >> n;
	int j, h; cin >> j >> h;
	int round = 0;

	while (1)
	{
		j = (j + 1) / 2;
		h = (h + 1) / 2;
		round++;
		if (j == h)
			break;
	}
	cout << round << endl;
	return 0;
}