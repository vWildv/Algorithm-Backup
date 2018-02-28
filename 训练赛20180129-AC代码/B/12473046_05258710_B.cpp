#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
int main ()
{
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll sum;
    if (p>q){
        swap(a,b);
        swap(p,q);
    }
    sum=n/a*p+n/b*q-n/(a*b/__gcd(a,b))*p;

    cout<<sum<<endl;
}
