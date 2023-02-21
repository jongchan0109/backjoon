#include<iostream>
using namespace std;

int main(void)
{
    int t=20;
    double sum=0;
    double num_sum=0;
    while(t--)
    {
        string str;
        double num,grade=0;
        string str2;
        cin>>str>>num>>str2;
        num_sum+= num;
        switch(str2[0])
        {
            case 'A':
            grade+=4.0;
            break;
            case 'B':
            grade+=3.0;
            break;
            case 'C':
            grade+=2.0;
            break;
            case 'D':
            grade +=1.0;
            break;
            case 'F':
            grade+=0.0;
            break;
            case 'P':
            num_sum-=num;
            num=0.0;
            break;
        }
        if(str2[1]=='+')
            grade+=0.5;
        sum+=grade*num;
    }
    cout<<sum/num_sum<<endl;
    return 0;
}
