#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q;
    int ans=0;
    cin>>n>>p>>q;
    ans+=n/2;
    if (n%2!=0)
    {
        ans++;
        if (p!=0) p--;
        if (q!=0) q--;
    }
    ans+=(p+q)/4;
    if ((p+q)%4!=0)ans++;
    cout<<ans<<endl;
}
