#include <bits/stdc++.h>
using namespace std;

long long mod=1000000007;

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
    int T;
    cin>>T;
    while (T--)
    {
        int n,k;
        cin>>n>>k;
        long long sum=1;
        for (int i=2;i<=n;i++)
        {
            sum+=POW(i,k);
            if (sum>=mod) sum-=mod;
        }
        cout<<sum<<endl;
    }
}