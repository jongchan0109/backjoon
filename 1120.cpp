#pragma warning(disable:4996)
#include<iostream>
#include<string>
using namespace std;

int main(void)
{
	int cnt = 0,idx=0,max=0,count;
	string str1;
	string str2;
	cin >> str1;
	cin >> str2;
	
	if (str1.size() == str2.size())
	{
		for (int i = 0; i < str1.size(); i++) {
			if (str1[i] != str2[i])
				cnt++;
		}
		cout << cnt << endl;
		return 0;
	}
	
	while (1)
	{
		if (str1.size() == str2.size())
			break;
		for (int i = 0; i < str2.size() - str1.size() + 1; i++)
		{
			count = 0;
			for (int j = 0; j < str1.size(); j++)
			{
				if (str1[j] == str2[i + j])
				{
					count++;
				}
			}
			if (count > max)
			{
				max = count;
				idx = i;
			}
		}
		if (idx + str1.size() == str2.size())
			str1 = str2[idx - 1] + str1;
		else if (idx == 0)
			str1 = str1 + str2[str1.size()];
		else
			str1 = str2[idx - 1] + str1 + str2[idx + str1.size() ];
	
	}
	for (int i = 0; i < str1.size(); i++)
	{
		if (str1[i] != str2[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}
