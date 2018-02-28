#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

int judge(int x)
{
    if(x%400==0 || (x%4==0 && x%100!=0))
    {
        return 1;
    }
    return 0;
}

int main()
{
    int y;
    scanf("%d",&y);
    int sum=0;
    for(int i=y;i<=y+200;i++)
    {
        if(judge(i)==judge(y) && i!=y && sum%7==0)
        {
            printf("%d\n",i);
            break;
        }
        if(judge(i))
        {
            sum+=2;
        }
        else
            sum++;
    }
    return 0;
}
