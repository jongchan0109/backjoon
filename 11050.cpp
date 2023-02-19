#include<iostream>
using namespace std;

int combination(int a,int b);
int main(void)
{
    int n1,n2;cin>>n1>>n2;
    cout<<combination(n1,n2);
	return 0;
}

int combination(int a,int b)
{
    if(a==b||a==1||b==0)
        return 1;
    if(b==1)
        return a;
    else
        return combination(a-1,b-1)+combination(a-1,b);
}