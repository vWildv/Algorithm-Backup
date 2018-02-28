#include<iostream>
using namespace std;
long long gcd(long long a,long long b)
{
    return a%b==0?b:gcd(b,a%b);
}

int main()
{
    long long n,p,q,a,b;
    while(cin>>n>>a>>b>>p>>q)
    {
        long long lcm=a*b/gcd(a,b);
        long long x=n/a,y=n/b,z=n/lcm;
        long long sum=x*p+y*q;
        if(z)
          sum=(p>q)?sum-z*q:sum-z*p;
        cout<<sum<<endl;
    }
    return 0;
}
