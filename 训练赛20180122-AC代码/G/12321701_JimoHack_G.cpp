#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char bg[100][100];
bool isok[100];
int n,k,cnt,m;
void dfs(int x)
{
    if(k==m)
    {
        ++cnt;
        return ;
    }
    if(x>=n)
        return ;
    for(int j=0;j<n;++j)
        if(isok[j]==0 && bg[x][j]=='#')
        {
            isok[j]=true;
            ++m;
            dfs(x+1);
            isok[j]=false;
            --m;
        }
    dfs(x+1);
}
int main()
{
    int i,j;
    while(~scanf("%d%d",&n,&k))
    {
        if(n==-1&&k==-1) return 0;
        getchar();
        for(i=0; i<n; i++)
        {
            for(int j=0;j<n;++j)
                bg[i][j]=getchar();
            getchar();
        }
        cnt=0;
        m=0;
        memset(isok,false,sizeof(isok));
        dfs(0);
        printf("%d\n",cnt);
    }
}
