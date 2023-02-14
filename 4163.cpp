#include<iostream>
using namespace std;

int main(void)
{
    while(true)
    {
        int num1,num2,num3;cin>>num1>>num2>>num3;
        if(num1==0&&num2==0&&num3==0)
            break;
        num1*=num1;num2*=num2;num3*=num3;
        if(num1==num2+num3)
            cout<<"right\n";
        else if(num2==num1+num3)
            cout<<"right\n";
        else if(num3==num1+num2)
            cout<<"right\n";
        else
            cout<<"wrong\n";
    }
    return 0;   
}