#include <bits/stdc++.h>
using namespace std;

long long mod=100003;

long long Mul(long long a, long long b)
{
    long long res = 0;
    while(b)
    {
        if(b & 1)
        {
            res = (res + a) %mod;
        }
        b >>= 1;
        a = (a + a) % mod;
    }
    return res;
}

long long POW(long long a, long long n)
{
    long long
    res = 1;
    while(n)
    {
        if(n & 1)
        {
            res = Mul(res, a);
        }
        n >>= 1;
        a = Mul(a, a);
    }
    return res;
}

int main()
{
    long long m,n;
    cin>>m>>n;
    long long k1=POW(m,n);
    long long k2=POW(m-1,n-1)*m%mod;
    cout<<(k1+mod-k2)%mod<<endl;
}

