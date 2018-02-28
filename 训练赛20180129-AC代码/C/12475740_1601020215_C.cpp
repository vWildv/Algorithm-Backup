#include<stdio.h>
int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        int t=b>0?(a+b%n)%n:a-(-b)%n;
        printf("%d\n",t<=0?t+n:t);
    }
}
