#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
long long gcd(long long  a,long long  b)
{
    return b?gcd(b,a%b):a;
}
int main()
{
    long long  num,a,b,p,q;
    while(cin>>num>>a>>b>>p>>q)
    {
        long long  sum1=num/a;
        long long sum2=num/b;
        long long sum3=num/((a*b)/gcd(a,b));
//        cout<<sum1<<sum2<<sum3<<endl;
        if(p>q)
        {
            long long last=sum1*p+(sum2-sum3)*q;
            printf("%lld",last);
            cout<<endl;
        }
        else
        {
            long long last=(sum1-sum3)*p+sum2*q;
            printf("%lld",last);
            cout<<endl;
        }
    }
    return 0;
}
