
#include <iostream>
#include <cstring>
using namespace std;

const int maxn=1005;
int fa[maxn];

int Find(int x)
{
    if(fa[x]==-1)
    {
        return x;
    }
    return fa[x]=Find(fa[x]);
}

int mix(int x,int y)
{
    int fx=Find(x);
    int fy=Find(y);
    if(fx!=fy)
    {
        fa[fx]=fy;
        return 1;
    }
    return 0;
}

int main()
{
    int t,n,m,x,y;
    cin>>t;
    while(t --)
    {
        cin>>n>>m;
        memset(fa,-1,sizeof(fa));
        int ans=n;
        while(m--)
        {
            cin>>x>>y;
            ans-=mix(x,y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
