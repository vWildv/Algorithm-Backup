#include<stdio.h>
int ql(int m)
{
    int vis=0;
    for(int i=1;i<=m;i++)
    {
        int yu,x;
        x=i;
        yu=x%2;
        while(yu==0)
        {
            vis++;
            x/=2;
            yu=x%2;
        }
    }
    return vis;
}
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        int a,b;
        for(int i=0;i<t;i++)
        {
            scanf("%d%d",&a,&b);
            int c=ql(a);
            int d=ql(b);
            int e=ql(a-b);
            printf("%d\n",c-d-e);

        }
    }
}
