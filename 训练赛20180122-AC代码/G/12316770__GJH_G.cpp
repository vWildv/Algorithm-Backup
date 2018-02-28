#include <iostream>
#include <cstring>
using namespace std;
bool mp[10][10];
bool lie[10];
int n,k,ans;
void dfs(int h,int num)
{
    if (num==k)
    {
        ans++;
        return;
    }
    if (h==n) return;
    for (int i=h;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (!lie[j]&&mp[i][j])
            {
                lie[j]=1;
                dfs(i+1,num+1);
                lie[j]=0;
            }
        }
    }
}

int main()
{
    while (cin>>n>>k)
    {
        if (n==-1) return 0;
        memset(mp,0,sizeof(mp));
        memset(lie,0,sizeof(lie));
        ans=0;
        string str;
        for (int i=0;i<n;i++)
        {
            cin>>str;
            for (int j=0;j<n;j++)
                if (str[j]=='#') mp[i][j]=1;
        }
        dfs(0,0);
        cout<<ans<<endl;
    }
}
