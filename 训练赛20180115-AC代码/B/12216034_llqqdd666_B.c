#include <stdio.h>
int a[66666];
int zhao(int x)
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
    fx=zhao(x);
    fy=zhao(y);
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
    scanf ("%d %d",&n,&m);
    for (int i=0;i<n;i++)
    {
        a[i]=i;
    }
    for (int i=1;i<=m;i++)
    {
        scanf ("%d%d",&t1,&t2);
        join(t1,t2);
    }
    root=zhao(a[0]);
    ans=0;
    for (int i=0;i<n;i++)
    {
        if (zhao(a[i])==root)
            ans++;
    }
    printf ("%d\n",ans);
    return 0;
}
