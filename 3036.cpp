#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main(void)
{
    int mod,n;cin>>n;
    int arr[101];
    for(int i=0;i<n;i++)
        cin>>arr[i];
	for(int i=1;i<n;i++)
    {
        mod = gcd(arr[0],arr[i]);
        cout<<arr[0]/mod<<"/"<<arr[i]/mod<<endl;
    }
    return 0;
}
