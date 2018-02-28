#include <bits/stdc++.h>
using namespace std;
long long p[100005],s[100005],w[100005];
int lookfor(int n,int k)
{
    int i,j,m;
    i=0;
    j=n-1;
    while(i<j)
    {
        m=(i+j)/2+1;
        if(k==s[m]) return m-1;
        else if(k<s[m]) j=m-1;
        else i=m;
    }
    return i;
}

int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        memset(p,0,sizeof(p));
        memset(s,0,sizeof(s));
        memset(w,0,sizeof(w));
        int n,m;
        scanf("%d%d",&n,&m);
        for (int i=0; i<n; i++)
            scanf("%lld%lld",&s[i],&p[i]);
        w[n-1]=p[n-1]*s[n-1];
        for (int i=n-2; i>=0; i--)
            if (w[i+1]<p[i]*s[i]) w[i]=w[i+1];
            else w[i]=p[i]*s[i];

        for (int i=0; i<m; i++)
        {
            long long k;
            scanf("%lld",&k);
            if (s[n-1]<k)
            {
                printf("%lld\n",k*p[n-1]);
                continue;
            }
            int j=lookfor(n,k);
            if (k*p[j]<w[j+1]) printf("%lld\n",k*p[j]);
            else printf("%lld\n",w[j+1]);
        }
    }
}
