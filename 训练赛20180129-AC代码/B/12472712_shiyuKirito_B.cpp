#include<stdio.h>
#include<iostream>
using namespace std;
bool  judge(long long int a,long long int b)
{
    if(a>b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
long long int gcd(long long int a,long long int b)
{    int tmp;
    while(b)
    {
        tmp=b;
        b=a%b;
        a=tmp;
    }
    return a;
}
int main ()
{
    long long int n,a,b,p,q;
    long long int t1,t2,t3;
    while(scanf("%lld%lld%lld%lld%lld",&n,&a,&b,&p,&q)==5)
    {
         t1=0;t2=0;t3=0 ;
         long long int ans;
        t2=n/a;
        t3=n/b;
        t1=n/((a*b)/gcd(a,b));
        if(judge(p,q))
        {
            ans=t2*p+t3*q+t1*p-t1*(p+q);
        }
        else
        {
            ans=t2*p+t3*q+t1*q-t1*(p+q);
        }
        printf("%lld\n",ans);
        /*cout<<t1<<endl;
        cout<<t2<<endl;
        cout<<t3<<endl;*/
    }
    return 0;
}
