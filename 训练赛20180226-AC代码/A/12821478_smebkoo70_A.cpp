#include<stdio.h>
#include<iostream>
#include<string.h>
#define mod 100003
using namespace std;
long long n,m;
long long kuaisumi(long long x,long long y)
{
    long long t = x % mod,ans=1;
    while (y>0)
    {
        if (y % 2!=0) ans = t * ans % mod;
        t =t * t % mod;
        y = y / 2;
    }
    return ans;
}
int main()
{
    while(cin >> m >> n)
    {
        cout<< (kuaisumi(m,n)-(m % mod) * kuaisumi(m-1, n-1) % mod + mod) % mod <<endl;
    }
}
