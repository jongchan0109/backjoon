#include<iostream>
using namespace std;

int main(void)
{
    int x,y,w,h;cin>>x>>y>>w>>h;
    int min1=1001,min2=1001,result;
    
    min1 = x-0<w-x?x-0:w-x;
    min2 = y-0<h-y?y-0:h-y;

    result = min1<min2?min1:min2;

    cout<<result<<endl;
    return 0;
}