#pragma warning(disable:4996)
#include<iostream>
using namespace std;

int main(void)
{
	int n;
	int weight[51], height[51], grade[51] = { 1, };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> weight[i] >> height[i];
		grade[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (weight[i] < weight[j] && height[i] < height[j])
				grade[i]++;
		}
	}
	for (int i = 0; i < n; i++)
		cout << grade[i] << " ";

	return 0;
}