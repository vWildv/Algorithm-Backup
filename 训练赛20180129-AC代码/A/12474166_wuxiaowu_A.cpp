#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int run(int year)
{
    if(year%400==0||(year%4==0&&year%100!=0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int sum=0;
        for(int i=n+1; i; i++)
        {
           if(run(i))
           {
               sum+=2;
           }
           else if(!run(i))
           {
               sum+=1;
           }
           if(sum%7==0&&run(i)==run(n))
           {
               printf("%d\n",i);
               break;
           }

        }


    }
}
