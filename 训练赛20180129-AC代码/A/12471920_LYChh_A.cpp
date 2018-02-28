#include <stdio.h>
int pan(int n)
{
    if(n%400==0||n%4==0&&n%100!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ma=0;
        for(int i=n;;i++)
        {
            if(pan(i)==1)
            {
                ma+=2;
            }
            else
            {
                ma+=1;
            }
            if(ma%7==0&&pan(i+1)==pan(n))
            {
                printf("%d\n",i+1);
                break;
            }
        }
    }
    return 0;
}
