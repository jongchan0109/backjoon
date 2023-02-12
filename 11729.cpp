#pragma warning(disable:4996)
#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int,int, int, int);

int main(void)
{
	int n,cnt=1; cin >> n;
	
	for (int i = 0; i < n; i++)
		cnt *= 2;
	cout << cnt - 1<<"\n";
	hanoi(n, 1, 2, 3);
	
	return 0;
	
}

void hanoi(int n, int start, int mid, int last)
{
	if (n == 1) {
		cout << start << " " << last<<"\n";
		return;
	}
	else {
		hanoi(n - 1, start, last, mid);
		cout << start << " " << last << "\n";
		hanoi(n - 1, mid, start, last);
	}
}