#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
struct point
{
    double x,y;
} p[1005];
int fa[5000],n;
int Count[1005],num=0;
void init()
{
    for(int i=1; i<=n; i++)
    {
        fa[i]=i;
    }
}
int find(int x)
{
    return fa[x]!=x?fa[x] = find(fa[x]):fa[x];
}
void unin(int a,int b)
{
    if(a>b) fa[find(a)]=find(b);
    else fa[find(b)]=find(a);
}
double dis(point a,point b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{
    double d;
    int m,s;
    while(~scanf("%d%lf",&n,&d))
    {
        init();
        memset(Count,0,sizeof(Count));
        for(int i=1; i<=n; i++)
        {
            scanf("%lf%lf",&p[i].x,&p[i].y);
        }
        char c;
        int w;
        while(cin>>c)
        {
            if(c=='O')
            {
                cin>>w;
                for(int i=0; i<num; i++)
                {
                    if(dis(p[Count[i]],p[w])<=d)
                        unin(Count[i],w);
                }
                Count[num++]=w;
            }
            if(c=='S')
            {
                scanf("%d%d",&m,&s);
                if(find(m)==find(s))
                    printf("SUCCESS\n");
                else
                    printf("FAIL\n");
            }
        }


    }
}
