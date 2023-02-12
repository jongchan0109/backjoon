#pragma warning(disable:4996)
#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
#define MAX 100
int main(void)
{
	int n, m; cin >> n >> m;
	int cnt = 0,i=0,j=0;
	string str1[MAX];
	string str2[MAX];

	for (int i = 0; i < n; i++)
		cin >> str1[i];
	for (int i = 0; i < m; i++)
		cin >> str2[i];

	sort(str1, str1 + n);
	sort(str2, str2 + m);

	while (i < n && j < m)
	{
		if (str1[i] == str2[j]) {
			cnt++;
			j++;
		}
		else  if (str1[i] < str2[j])
			i++;
		else
			j++;
	}
	
	cout << cnt;
	return 0;
}