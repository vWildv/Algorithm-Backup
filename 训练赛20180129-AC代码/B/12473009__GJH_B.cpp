#include <iostream>
using namespace std;

long long gcd(long long a,long long b)
{
    if (b==0) return a;
    else return gcd(b,a%b);
}

int main()
{
    long long n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;

    long long sum=n/a*p;
    sum+=n/b*q;

    long long k=a*b/gcd(a,b);
    sum-=n/k*min(p,q);

    cout<<sum<<endl;
}

