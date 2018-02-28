#include<stdio.h>
int father[50000];
int n,m;
void diyi()
{
    int i;
    for(i=0;i<n;i++)
    {
        father[i]=i;
    }
}
int ggg(int x)
{
    int a=x;
    while(a!=father[a])
    {
        a=father[a];
    }
    father[x]=a;
    return father[x];
}
void mix(int x,int y)
{
    int fa=ggg(x);
    int fb=ggg(y);
    if(fa!=fb)
    {
        father[fa]=fb;
    }
}
int main()
{
    int i,v1,v2;
    while(~scanf("%d%d",&n,&m))
    {
        diyi();
        while(m--)
        {
            scanf("%d%d",&v1,&v2);
            mix(v1,v2);
        }
        int p=ggg(0);
        int s=0;
        for(i=0;i<n;i++)
        {
            if(ggg(i)==p)
            {
                s++;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
