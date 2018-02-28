#include<iostream>
#include<cstdio>
#include<cstring>
#define LL long long
using namespace std;
char ss[1000];
char str[20]={"bkpstor"};
bool judge(int i)
{
    int cnt=0;
    for(int j=i;j<i+7;j++)
    {
        if(ss[j]!=str[cnt++])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    while(gets(ss))
    {
        int len=strlen(ss);
        int d=0;
        for(int i=0;i<len;i++)
        {
            if(judge(i))
            {
                cout<<"Warning"<<endl;
                d=1;
                break;
            }
        }
        if(d==0)
        {
            cout<<"Safe"<<endl;
        }
    }
}
