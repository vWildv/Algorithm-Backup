#include<stdio.h>
int a[1005];
int b[1005];
int find(int x)
{
    while(x!=a[x])
    {
        x=a[x];
    }
    return x;
}
void join(int x,int y)
{
    int px=find(x);
    int py=find(y);
    if(px!=py)
    {
        a[px]=py;
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,x,y,t,f1;
        int i,sum=1,j;
        scanf("%d%d",&n,&m);
        for(i=1; i<=n; i++)
        {
            a[i]=i;
        }
        for(i=0; i<m; i++)
        {
            scanf("%d%d",&x,&y);
            join(x,y);
        }
       for(i=1;i<=n;i++)
       {
           b[i]=find(i);
       }
        for(i=0; i<n; i++)
        {
            for(j=1; j<n-i; j++)
            {
                if(b[j]>b[j+1])
                {
                    t=b[j+1];
                    b[j+1]=b[j];
                    b[j]=t;
                }
            }
        }
    
        for(i=1;i<=n-1;i++)
        {
            if(b[i]!=b[i+1])
                sum++;
        }
        printf("%d\n",sum);
    }
}
