#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
#define ll long long int
using namespace std;

ll  gcd(ll  a,ll b )
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll lcd(ll a, ll b)
{
    return a*b/gcd(a,b);
}
int main()
{
    ll n,a,b,p,q;
    ll sum,num1,num2,num3;
    while(cin>>n>>a>>b>>p>>q)
    {
        num1=n/a;
        num2=n/b;
        num3=n/lcd(a,b);
        sum=(num1-num3)*p+(num2-num3)*q+num3*max(q,p);
        cout<<sum<<endl;
    }
}


