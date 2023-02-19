#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define MAX 101

int gcd(int a,int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}
int main(void)
{
    int n;cin>>n;
    int arr[MAX];
    int result;
    vector<int> res;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);

    result = arr[1]-arr[0];   
	
    for(int i=2;i<n;i++)
        result = gcd(result,arr[i]-arr[i-1]);

    for(int i=2;i*i<=result;i++)
    {
        if(result%i==0)
        {
            res.push_back(i);
            res.push_back(result/i);
        }
    }
    res.push_back(result);

    sort(res.begin(), res.end());
	res.erase(unique(res.begin(), res.end()), res.end());

    for(int i=0;i<res.size();i++)
        cout<<res[i]<<" ";
    return 0;
}
