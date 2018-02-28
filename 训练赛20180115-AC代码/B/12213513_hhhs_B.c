#include <stdio.h>
int a[50011];
int find(int x)
{
    int r=x;
    while (r!=a[r])
        r=a[r];
    int j=x;
    int t;
    while (a[j]!=r)
    {
        t=a[j];
        a[j]=r;
        j=t;
    }
    return r;
}
void join(int x,int y)
{
    int fx,fy;
    fx=find(x);
    fy=find(y);
    if (fx!=fy)
        a[fx]=fy;
}
int main()
{
    int n,m;
    int tn;
    int t;
    int t1,t2;
    int ans;
    int root;
    scanf ("%d%d",&n,&m);
    //首先初始化
    for(int i=0; i<n; i++)
    {
        a[i]=i;
    }
    for(int i=1; i<=m; i++)
    {
        scanf ("%d%d",&t1,&t2);
        join(t1,t2);
    }
    root=find(a[0]);
    ans=0;
    for(int i=0; i<n; i++)
    {
        if (find(a[i])==root)
            ans++;
    }
    printf ("%d\n",ans);
    return 0;
}
