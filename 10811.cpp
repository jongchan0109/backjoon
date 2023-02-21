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
        for(int t=i;t<=(j+i)/2;t++)
        {
            tmp = arr[t];
            arr[t]=arr[j-t+i];
            arr[j-t+i]=tmp;

        }
       
    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
