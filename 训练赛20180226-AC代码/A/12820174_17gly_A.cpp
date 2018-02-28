#include <iostream>
#include <cstring>
#include <string>
#define LL long long
using namespace std;
const LL mod=100000+3;
LL quick(LL a,LL b)
{
    LL t=1;
    a%=mod;
    while(b)
    {
        if(b&1==1)
        {
            t=(t*a)%mod;
        }
        a=(a*a)%mod;
        b>>=1;
    }
    return t%mod;
}
int main()
{
	LL m,n;
	while(cin>>m>>n)
    {
        LL ans=quick(m,n)-(m*quick(m-1,n-1))%mod;
        if(ans<0)ans+=mod;
        cout<<ans<<endl;
    }
}
