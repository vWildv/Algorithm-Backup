#include<bits/stdc++.h>
using namespace std;
#define N 100005
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
long long a[N],l[N],r[N];
int main()
{

    long long t,n;
    cin>>t;
    while(t--&&cin>>n)
    {
        for (int i=0; i<n; i++)
            cin>>a[i];
        l[0]=a[0];
        r[n-1]=a[n-1];
        for(int i=1; i<n; i++)
            l[i]=gcd(l[i-1],a[i]);
        for(int i=n-2; i>=0; i--)
            r[i]=gcd(r[i+1],a[i]);
        int ans=max(l[n-2],r[1]);
        for(int i=1; i<n-1; i++)
            ans=max(ans,gcd(l[i-1],r[i+1]));
        cout<<ans<<endl;
    }
    return 0;
}
