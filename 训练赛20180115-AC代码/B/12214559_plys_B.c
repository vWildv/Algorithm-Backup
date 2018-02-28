#include<stdio.h>
int fa[50005];
void init(int n){
    for(int i=0;i<n;i++)
    {
        fa[i]=i;
    }
}
int find1(int x)
{
    int tmp=x;
    while(tmp!=fa[tmp])
    {
        tmp=fa[tmp];
    }
    fa[x]=tmp;
    return fa[x];
}
void jiaru(int a,int b)
{
    if(find1(a)!=find1(b))
    {
        fa[find1(a)]=find1(b);
    }

}
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        init(n);
        int a,b;
        for(int i=0;i<m;i++)
        {
            scanf("%d%d",&a,&b);
            jiaru(a,b);
        }
        int temp=find1(0);
        int vis=0;
        for(int i=0;i<n;i++)
        {
            if(find1(i)==temp)
            {
                vis++;
            }
        }
        printf("%d\n",vis);
    }
}
