#include <iostream>
#include <cstdio>
#include <vector>
#include <string.h>
#include <map>
using namespace std;

int pre[200005],c[200005];
vector<int>num[200005];
int findd(int x)
{
    int r=x;
    while(r!=pre[r])
        r=pre[r];

    int i=x,j;
    while(pre[i]!=r)
    {
        j=pre[i];
        pre[i]=r;
        i=j;
    }
    return r;
}

void mix(int x,int y)
{
    int fx=findd(x),fy=findd(y);
    if(fx!=fy)
        pre[fy]=fx;
}
int main()
{
    int n,m,k,i,j;
    while(scanf("%d%d%d",&n,&m,&k)!=EOF)
    {
        int a,b;
        for(i=1;i<=n;i++)
        {
            pre[i]=i;
            scanf("%d",&c[i]);
        }
        for(i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            mix(a,b);
        }
        for(i=1;i<=n;i++)
        {
            num[findd(i)].push_back(c[i]);
        }
        int ans = 0;
        for(i=1;i<=n;i++)
        {
            int len=num[i].size(),mmax=0;

            if(len>1)
            {
                map<int,int>visit;
                for(j=0;j<len;j++)
                {

                    visit[num[i][j]]++;
                    mmax=max(mmax,visit[num[i][j]]);
                }
                ans+=(len-mmax);
            }
            num[i].clear();
        }
        printf("%d\n",ans);
    }
    return 0;
}
