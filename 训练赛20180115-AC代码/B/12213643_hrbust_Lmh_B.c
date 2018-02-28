#include <stdio.h>

int fa[50005],n,m,x,y;

void primer()
{
    for(int i = 0;i < n;++i) fa[i] = i;
}

int find(int x)
{
    return fa[x]!=x?fa[x] = find(fa[x]):fa[x];
}

void is(int a,int b)
{
    if(a>b) fa[find(a)] = find(b);
    else fa[find(b)] = find(a);
    return;
}

int main()
{
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        primer();
        while(m--)
        {
            scanf("%d%d",&x,&y);
            is(x,y);
        }
        int ans = 0;
        for(int i = 0;i < n;++i)
        {
            if(find(i)==fa[0]) ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
