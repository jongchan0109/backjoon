#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string sum(string,string);
int main(void)
{
    string str1,str2,str3;cin>>str1>>str2>>str3;
    string ans;
    ans = sum(str1,str2);
    reverse(ans.begin(),ans.end());
    ans = sum(ans,str3);
    reverse(ans.begin(),ans.end());
    cout <<ans<<endl;
    return 0;
}

string sum(string str1,string str2)
{
    string ans = "";
    int i=0,j=0;

    reverse(str1.begin(),str1.end());
    reverse(str2.begin(),str2.end());
    int sgn=0;
    while(i<str1.size()&&j<str2.size())
    {   
        int num=0;
        char ch='0';
        num = str1[i]+str2[j]-2*'0'+sgn;
        if(num>=10){
            ch= num+'0'-10;
            ans = ans+ch;
            sgn=1;
        }
        else{
            sgn=0;
            ch = num+'0';
            ans = ans+ch;
        }
        i++;
        j++;
    }
    if(i==str1.size()&&j!=str2.size())
    {
        if(sgn==1){
        str2[j]++;
            sgn=0;
        }
        for(;j<str2.size();j++)
        {
            int num;
            char ch;
            num = str2[j]-'0'+sgn;
            if(num>=10)
            {
                ch = num+'0'-10;
                sgn=1;
                ans+=ch;
            }
            else
            {
                ch = num+'0';
                sgn=0;
                ans+=ch;
            }
        }
    }else if(j==str2.size()&&i!=str1.size())
    {
        if(sgn==1){
        str1[i]++;
            sgn=0;
        }
        for(;i<str1.size();i++)
        {
            int num;
            char ch;
            num = str1[i]-'0'+sgn;
            if(num>=10)
            {
                ch = num+'0'-10;
                sgn=1;
                ans+=ch;
            }
            else
            {
                ch = num+'0';
                sgn=0;
                ans+=ch;
            }
        }
    }
    else{
        if(sgn==1)
        ans+='1';
    }
    return ans;
}