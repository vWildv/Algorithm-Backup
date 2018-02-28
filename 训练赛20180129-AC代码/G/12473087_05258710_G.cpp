#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int vis[1002];
int a[1002];
int cnt[1002];
int main ()
{
    int n;
    cin>>n;

        memset (vis,0,sizeof(vis));
        memset (a,0,sizeof(a));
        memset (cnt,0,sizeof (cnt));
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int maxx=0;
        cnt[vis[a[0]]]++;
        for(int i=1;i<n;i++)
        {
            if (a[i]==a[i-1])vis[a[i]]++;
            cnt[vis[a[i]]]++;
            maxx=max(vis[a[i]],maxx);
        }
        int sum=0;
        for (int i=0;i<=maxx;i++)
        {
            if(cnt[i]-1>0)
            {
                sum+=(cnt[i]-1);
            }
        }
        cout<<sum<<endl;

}