#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int fun(int i)
{
    if(i%400==0||i%4==0&&i%100!=0)
        return 1;
    else return 0;
}
int main()
{
    int year;
    while(cin >> year)
    {
        int sum=0;
        for(int i=year+1;; i++)
        {
            if(i%400==0||i%4==0&&i%100!=0)
            {
                sum=sum+2;
                sum=sum%7;
            }
            else
            {
                sum=sum+1;
                sum=sum%7;
            }
            if(sum%7==0)
            {
                if(fun(i)==fun(year))
                {
                    cout << i << endl;
                    break;
                }
                else continue;
            }
        }
    }
    return 0;
}

