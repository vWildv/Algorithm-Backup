#include <bits/stdc++.h>
using namespace std;
int mp[2005][2005];
int main()
{
    memset(mp,0,sizeof(mp));
    int k,n,m;
    cin>>n>>m>>k;
    string str;
    for (int i=1;i<=n;i++)
    {
        cin>>str;
        for (int j=0;j<m;j++)
            if (str[j]=='.') mp[i][j+1]=1;
    }
    int ans=0;
    if (k==1)
    {
        for (int i=1;i<=n;i++)
        {
            for (int j=0;j<=m;j++)
                if (mp[i][j]==1) ans++;
        }
        cout<<ans<<endl;
        return 0;
    }


    for (int i=1;i<=n+1;i++)
    {
        int t=0;
        for (int j=1;j<=m+1;j++)
        {

            if (mp[i][j]==1) t++;
            else
            {
                if (t>=k) ans=ans+t-k+1;
                t=0;
            }
        }
    }

    for (int i=1;i<=m+1;i++)
    {
        int t=0;
        for (int j=1;j<=n+1;j++)
        {
            if (mp[j][i]==1) t++;
            else
            {
                if (t>=k) ans+=t-k+1;
                t=0;
            }
        }
    }
    cout<<ans<<endl;
}
