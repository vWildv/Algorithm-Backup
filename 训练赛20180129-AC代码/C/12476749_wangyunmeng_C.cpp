#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a,b,i,j,k,h;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
    {
        if(b<0)
        {
              if((a-1)>=((-b)%n))
              {
                  h=a+b%n;
              }
              else
              {
                  h=n+a+b%n;
              }
        }
        else if(b>=0)
            {
              if((n-a)>=b%n)
              {
                h=a+b%n;
              }
              else
                {
                    h=a+b%n-n;
              }
            }
            printf("%d\n",h);
    }
}