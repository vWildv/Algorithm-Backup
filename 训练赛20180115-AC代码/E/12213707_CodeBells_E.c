#include<stdio.h>
int C(int m,int n)
{
    int i,sum1=0,sum2=0,j;
    for(i=m,j=n;j>0;i--,j--)
    {
        int a=i;
        int b=j;
        while(a%2==0)
        {
            sum1++;
            a/=2;
        }
        while(b%2==0)
        {
            sum2++;
            b/=2;
        }
    }
        return sum1-sum2;
}
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        printf("%d\n",C(m,n));
    }
}

