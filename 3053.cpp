#include<iostream>
using namespace std;
#define pi 3.1415926535897932
int main(void)
{
    int n;cin>>n;

    double area1,area2;
    area1 = n*n*pi;
    area2 = n*n*2;

    cout << fixed;
	cout.precision(6);
    cout<<area1<<endl<<area2<<endl;
    return 0;   
}
