#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
using namespace std;
int judge(int y)
{
    if( (y%400==0) || (y%4==0 && y%100!=0) )
        return 1;
    return 0;
}
int main()
{
    int year;
    int i;
    int flag;
    while(~scanf("%d",&year))
    {
        flag=0;
         for(i=year+1; ; i++)
        {
            if( judge(i))
            {
                flag += 2;
                flag %= 7;
            }
            else
            {
                flag++;
                flag%=7;
            }
            if(flag==0&&judge(year)==judge(i))
                break;
    }
    printf("%d\n",i);
}
}
