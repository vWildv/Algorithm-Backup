#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
long long judge(int x)
{
    return (x%4==0&&x%100!=0)||x%400==0;
}
int check(int x)
{
    long long sum=0;
    for (int i=x;;i++)
    {
        sum+=(365+judge(i));
        if (sum%7==0&&judge(x)==judge(i+1)){return i+1;}
    }
}
int main ()
{
    int x;
    cin>>x;
    cout<<check(x)<<endl;
}
