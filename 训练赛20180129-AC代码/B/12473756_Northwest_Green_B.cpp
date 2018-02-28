#include<iostream>
using namespace std;
long long money(long long a,long long b)
{
    if(b==0) return a;
    return money(b,a%b);
}
long long sum(long long a,long long b)
{
    return (a*b)/money(a,b);
}
int main()
{
    long long n,a,b,p,q,m;
    while(cin>>n>>a>>b>>p>>q)
    {
        long long x1=n/a;
        long long x2=n/b;
        long long x3=n/sum(a,b);
        x1=x1-x3;
        x2=x2-x3;
        m=x1*p+x2*q+(x3)*max(p,q);
        cout<<m<<endl;
    }
}
