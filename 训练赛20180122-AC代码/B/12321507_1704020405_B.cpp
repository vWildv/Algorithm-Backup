#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
#include<cmath>
using namespace std;
int pre[1005];
int Find(int s)
{
    s != pre[s]?s = Find(pre[s]):pre[s] ;
    return s;
}
void mix(int x1,int y1)
{
    int x2 = Find(x1),y2 = Find(y1);
    if (x2 != y2)
    {
        pre[y2] = x2;
    }
}

bool vis[1010];
int x[1010],y[1010];
int n,d;
bool dis(int a,int b)
{
    if ((x[a]-x[b])*(x[a]-x[b])+(y[a]-y[b])*(y[a]-y[b]) <= d*d)
        return true;
    return false;
}
int main()
{
    scanf("%d%d",&n,&d);
    for (int i = 1;i <= n;i ++)
    {
        pre[i] = i;
    }
    memset(vis,false,sizeof(vis));
    for (int i = 1;i <= n;i ++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    char c;
    while (cin >> c)
    {
        if (c == 'O')
        {
            int r;
            scanf("%d",&r);
            vis[r] = 1;
            for (int i = 1;i <= n;i ++)
              if (i != r && vis[i] && dis(i,r))
                  mix(i,r);
        }
        if (c == 'S')
        {
            int r,l;
            scanf("%d%d",&r,&l);
            int k1 = Find(r);
            int k2 = Find(l);
            if (k1 == k2)
                printf("SUCCESS\n");
            else
                printf("FAIL\n");
        }
    }
}
