#include<iostream>
using namespace std;

int main(void)
{
    int n,m;cin>>n>>m;
    int arr[101];
    int beg,end,mid,tmp;


    for(int i=1;i<=n;i++)
        arr[i]=i;

    while(m--)
    {
        cin>>beg>>end>>mid;
        int start  =arr[mid];
        int i=beg,last;
        while(arr[i]!=start)
        {   
            last= arr[beg];
            for(int k=beg;k<end;k++)
            {
                arr[k]=arr[k+1];
            }
            arr[end]=last;
        }

    }
    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
