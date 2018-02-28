#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{
    long long max1 = max(a,b);
    long long min1 = min(a,b);
    long long temp = max1 % min1;
    return temp == 0 ? min1 : gcd(min1 , temp);
}
int main()
{
    long long n,a,b,p,q;
    while(scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)!=EOF)
    {
        long long sum = 0;
        long long x1 = n / a;
        long long x2 = n / b;
        long long x3 = n / ((a*b)/gcd(a,b));
        sum = x1 * p + x2 * q - x3 * min(p,q);

        printf("%lld\n",sum);
    }
    return 0;
}
