#pragma warning(disable:4996)
#include<iostream>
#include<cstring>

int cnt = 0;

using namespace std;
int recursion(const char*str, int first, int last);
int isPalindrome(const char* s);
int main(void)
{
	int t; cin >> t;
	while (t--)
	{
		char str[1002]; cin >> str;
		cnt = 0;
		cout << isPalindrome(str)<<" " <<cnt<<endl;

	}
	return 0;
}

int recursion(const char* str, int first, int last)
{
	cnt++;
	if (first >= last)
		return 1;
	else if (str[first] != str[last]) return 0;
	else
		return recursion(str, first + 1, last - 1);
}
int isPalindrome(const char* s)
{
	return recursion(s, 0, strlen(s)-1);
}