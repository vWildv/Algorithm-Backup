#include<stdio.h>
int father[50005];
int n,m;
int chuhua()
{
    for(int i=0;i<n;i++)
    {
        father[i]=i;
    }
    return 0;
}
int getfather(int x)
{
    int a=x;
    while(a!=father[a])
    {
        a=father[a];
    }
    father[x]=a;
    return father[x];
}
int mix(int x,int y)
{
    int fa=getfather(x);
    int fb=getfather(y);
    if(fa!=fb)
    {
        father[fa]=fb;
    }
    return 0;
}
int main()
{
    int i,v1,v2;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        chuhua();
        while(m--)
        {
            scanf("%d%d",&v1,&v2);
            mix(v1,v2);
        }
        int p=getfather(0);
        int s=0;
        for(i=0;i<n;i++)
        {
            if(getfather(i)==p)
            {
                s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}