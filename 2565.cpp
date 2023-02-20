#include<iostream>
using namespace std;

int main(void)
{
    int n,tmp;cin>>n;
    int a[101],b[101];
    int dp[101];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=n-1;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;

                tmp=b[i];
                b[i]=b[j];
                b[j]=tmp;
            }
        }
    }

    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        int ma=0;
        for(int j=1;j<i;j++)
        {
            if(dp[j]>ma&&b[i]>b[j])
                ma=dp[j];
        }
        dp[i]=ma+1;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans = max(ans,dp[i]);
    }
    cout<<n-ans;
    return 0;
}
