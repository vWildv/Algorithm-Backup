#include<stdio.h>
int run(long long  n)
{
    if(n%400==0||(n%4==0&&n%100!=0))
        return 1;
    return 0;
}
int main()
{
    long long  n;
    while (~scanf("%lld",&n))
    {
        long long  m=n+1,p=0;
        for(long long  i=m;; i++)
        {
            if(run(i))
            {
                p+=366;
                m++;
            }
            else
            {
                p+=365;
                m++;
            }
            if(p%7==0&&(run(n)==run(i)))
            {
                printf("%lld\n",i);
                break;
            }
        }
    }
}
