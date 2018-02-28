#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int p[1005];
bool used[1005],vis[1005];
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<n;i++)
        cin>>p[i];

    int ans=0;
    int num=0;
    while (num<n)
    {
        memset(used,0,sizeof(used));
        for (int i=0;i<n;i++)
        {
            if (!vis[i] && !used[p[i]])
            {
                used[p[i]]=1;
                vis[i]=1;
                ans++;
                num++;
            }
        }
        ans--;
    }
    cout<<ans<<endl;

}
