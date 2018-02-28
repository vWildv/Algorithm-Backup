#include<iostream>
#include<cstdio>
using namespace std;
int deal(int num)
{
    if(num%400==0||num%4==0&&num%100!=0)
        return 366;
    else return 365;
}
int main()
{
    int num;
    while(cin>>num)
    {
        int start=num;
        int sum=0;
        while(1)
        {
            sum=sum+deal(num);
            sum=sum%7;
            num++;
            if(sum==0&&(deal(num)==deal(start)))break;
        }
        cout<<num<<endl;
    }
    return 0;
}
