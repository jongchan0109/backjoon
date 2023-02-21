#include<iostream>
using namespace std;

int main(void)
{
    int tmp,n,m;cin>>n>>m;
    int arr[101]={0,};
    for(int i=1;i<=n;i++)
        arr[i]=i;
    while(m--)
    {
        int i,j;cin>>i>>j;
        tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
