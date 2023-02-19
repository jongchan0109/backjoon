#include<iostream>
using namespace std;
#define MAX 1001
int combin(int a,int b);
int main(void)
{
    int num1,num2;cin>>num1>>num2;
    cout<<combin(num1,num2);
	return 0;
}

int combin(int a,int b)
{
    static int dp[MAX][MAX]={0,};
    if(dp[a][b]!=0)
        return dp[a][b];
    if(a==b||b==0)
    {
        dp[a][b]=1;
        return dp[a][b];
    }
    else if(b==1){
        dp[a][b]=a;
        return dp[a][b];
    }
    else
    {
        dp[a][b]=(combin(a-1,b-1)+combin(a-1,b))%10007;
        return dp[a][b];
    }
}
