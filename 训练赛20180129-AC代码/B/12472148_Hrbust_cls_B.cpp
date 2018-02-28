#include<bits/stdc++.h>
#define LL long long
using namespace std;

int main()
{
    LL n,a,b,p,q;
    while(cin>>n>>a>>b>>p>>q){
        LL LCM=a*b/__gcd(a,b);
        LL cr=n/a;
        LL cb=n/b;
        LL crb=n/LCM;
        LL sum=cr*p+cb*q;
        sum-=(p>q)?(q*crb):(p*crb);
        //cout<<LCM<<','<<cr<<','<<cb<<','<<crb<<endl;
        cout<<sum<<endl;
    }
    return 0;
}

