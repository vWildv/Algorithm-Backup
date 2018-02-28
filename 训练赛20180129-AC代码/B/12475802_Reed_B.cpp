#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;

long long max(long long x,long long y)
{
    return x>y?x:y;
}

long long gcd(long long a,long long b)
{
    if(b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    long long n,a,b,p,q;
    scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q);
    long long k=max(p,q);
    long long c=gcd(a,b);
    long long d=a*b/c;
    long long n1=n/a;
    long long n2=n/b;
    long long n3=n/d;
    printf("%lld\n",(n1-n3)*p+(n2-n3)*q+n3*k);
    return 0;
}
