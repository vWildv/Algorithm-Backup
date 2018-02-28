#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    long long int n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
    {
        long long int sum=n/a;
        long long int num=n/b;
        long long int w=n/((a*b)/__gcd(a,b));
        long long int total;
        if(q>p)
        {
            total=(sum-w)*p+(num)*q;
        }
        else
        {
            total=sum*p+(num-w)*q;
        }
        printf("%lld\n",total);
    }
}
