#include<stdio.h>
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m)&&n)
    {
        int a[101][101]={0},x,y,ru[101]={0};
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&x,&y);
           if(!a[x][y])
           {
                a[x][y]=1;
            ru[x]++;
           }


        }
        int sum=0,vis[100]={0};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ru[j]==0&&vis[j]==0)
                {sum++;
                vis[j]=1;
                    for(int k=0;k<n;k++)
                    {
                        if(a[k][j]==1)
                        {
                            a[k][j]=0;
                            ru[k]--;
                        }
                    }
                }

            }
        }
        if(sum==n)printf("YES\n");
        else printf("NO\n");

    }
}
