#include<iostream>
using namespace std;

int main(void)
{
    int n,m;cin>>n>>m;
    int i,j,k;
    int arr[101]={0,};
    while(m--)
    {
        cin>>i>>j>>k;
        for(int t=i;t<=j;t++)
            arr[t]=k;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
