#include <stdio.h>
long long TheSmallestDivisor(long long a,long long b){
    long long c,x=a,y=b;
    while(b!=0)
        { c=a%b; a=b;  b=c;}
    return x*y/a;
}
int main()
{
    long long n,a,b,p,q;
    while(~scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)){
        long long RedCnt=n/a,BlueCnt=n/b;
        long long mixCnt=n/TheSmallestDivisor(a,b);
        long long ret = RedCnt*p+BlueCnt*q-mixCnt*(p>q?q:p);
        printf("%lld\n",ret);
    }
    return 0;
}