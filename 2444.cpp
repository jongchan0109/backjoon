#include<iostream>
using namespace std;

int main(void)
{
    int n;cin>>n;
    char ch;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
            cout<<" ";
        for(int j=1;j<=2*i-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<" ";
        for(int j=1;j<=(n-i)*2-1;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}
