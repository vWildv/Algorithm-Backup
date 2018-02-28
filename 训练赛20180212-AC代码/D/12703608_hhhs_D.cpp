#include<stdio.h>
long long f(int x)
{
    int sum = 0;
    while(x)
    {
        sum=sum+x%10;
        x /= 10;
    }
    return sum;
}

int main()
{
    int n;
    scanf("%d",&n);
    long long tot = 0;
    for(long long i=19;; i++)
    {
        long long sum = f(i);
        if(sum == 10)
        {
            tot++;
            if(tot == n)
            {
                printf("%lld",i);
                break;
            }
        }
    }
    return 0;
}