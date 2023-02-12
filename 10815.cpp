#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 10
int main(void)
{
	int n; cin >> n;
	int card[MAX], card2[MAX], cpy[MAX] = { 0, };
	for (int i = 0; i < n; i++)
		cin >> card[i];
	int m; cin >> m;
	int c1 = 0, c2 = 0;
	for (int i = 0; i < m; i++) {
		cin >> card2[i];
	}

	sort(card, card + n);

	for (int i = 0; i < m; i++)
	{
		int left = 0, right = n - 1;
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (card[mid] == card2[i]) {
				cpy[i] = 1;
				break;
			}
			else if (card2[i] > card[mid])
			{
				left = mid + 1;
			}
			else
				right = mid - 1;
		
		}
	}

	for (int i = 0; i < m; i++)
		cout << cpy[i] << " ";
	return 0;
}