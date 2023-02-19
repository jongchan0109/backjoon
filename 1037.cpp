#include<iostream>
using namespace std;

#define MAX 51

int main(void)
{
    int n,min,max;cin>>n;
    int arr[MAX];
    long long result;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    min = arr[0];
    max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    result = max*min;
    cout<<result<<endl;
	return 0;
}
