#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        if(b<=0)
        {
            if((a-(-b)%n)%n<=0)
            {
                if((n-(a-(-b)%n)%n)%n==0)
                    printf("%d\n",n);
                else printf("%d\n",n-(-(a-(-b)%n)%n)%n);
            }
            else
            {
                    printf("%d\n",(a-(-b)%n)%n);
            }
        }
        if(b>0)
        {
            if((a+b%n)%n==0)
                printf("%d\n",n);
            else
                printf("%d\n",(a+b%n)%n);
        }
    }
}
