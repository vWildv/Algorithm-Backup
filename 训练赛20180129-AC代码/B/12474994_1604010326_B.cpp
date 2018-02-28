#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int gcd(int a,int b)
{
   return  b==0? a: gcd(b,a%b);
}
int main()
{

long long n,a,b,p,q;
while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q))
{
       long long c=a*b/gcd(a,b);
       long long o=min(p,q);
       long long sum=n/a*p+n/b*q-n/c*o;
       printf("%lld\n",sum);
}
}
