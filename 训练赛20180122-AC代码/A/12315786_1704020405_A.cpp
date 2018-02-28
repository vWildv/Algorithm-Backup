#include<cstdio>
#include<cstring>
using namespace std;
int fa[1005],n,m,x,y;
bool fb[1005];
void init()
{
    for(int i = 1;i <= n;++i) fa[i] = i;
}
int find(int x)
{
    return fa[x]!=x?fa[x] = find(fa[x]):fa[x];
}
void unin(int a,int b)
{
    if(a>b) fa[find(a)] = find(b);
    else fa[find(b)] = find(a);
    return ;
}
int main()
{int t;
 scanf("%d",&t);
    while(t --)
    {scanf("%d%d",&n,&m);
        init();
        while(m--)
        {
            scanf("%d%d",&x,&y);
            unin(x,y);
        }
        int ans = 0;
       memset(fb,false,sizeof(fb));
        for(int i = 1;i <= n;++i)
        {
            if(!fb[find(i)]){fb[find(i)] = true;ans++;}
        }
        printf("%d\n",ans);
    }
    return 0;
}
