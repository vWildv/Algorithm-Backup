#include<stdio.h>
bool check(int n)
{
    if(n%400==0||n%4==0&&n%100!=0)
        return true;
    else return false;
}
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        if(check(n)){
        int t=2;
        for(;;)
        {
            if(check(++n))
            {
                t++;
                t++;
            }
            else t++;
            if(t%7==2&&check(n))break;
        }
        printf("%d\n",n);}
        else
        {
            int t=1;
        for(;;)
        {
            if(check(++n))
            {
                t++;
                t++;
            }
            else t++;
            if(t%7==1&&!check(n))break;
        }
        printf("%d\n",n);
        }
    }
}
