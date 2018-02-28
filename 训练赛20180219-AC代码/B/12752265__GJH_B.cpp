#include <bits/stdc++.h>
using namespace std;

int k1[100005],k2[100005];

int gcd(int a,int b)
{
    if (a%b==0) return b;
    else return gcd(b,a%b);
}

int sov(int l,int r)
{
    if (l==r) return k2[l];
    if (l+1==r) return gcd(k2[l],k2[r]);
    int mid=(l+r)/2;
    return gcd(sov(l,mid),sov(mid+1,r));
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int n;
        cin>>n;
        map<int,int>num;

        for (int i=0;i<n;i++)
        {
            cin>>k1[i];
            k2[i]=k1[i];
            num[k1[i]]++;
        }

        int ans=sov(0,n-1);
        for (int i=0;i<n;i++)
        {
            if (num[k2[i]]!=1) continue;
            if (i==0) k2[i]=k2[i+1];
            else k2[i]=k2[i-1];

            int g=sov(0,n-1);
            if (g>ans) ans=g;

            k2[i]=k1[i];
        }
        cout<<ans<<endl;
    }
}
