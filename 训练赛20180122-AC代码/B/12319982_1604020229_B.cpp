#include<iostream>
#include<cstdio>
using namespace std;
int n,d;
int fa[1006];
struct node
{
    int x,y;
    bool flag;
} qq[1006];
int finds(int p)
{
    if(p==fa[p])
        return p;
    return fa[p]=finds(fa[p]);
}
void Union(int a,int b)
{
    int x,y;
    x=finds(a);
    y=finds(b);
    if(x!=y)fa[y]=x;
}
int dis(node a,node b)
{
    return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
int main()
{
    while(~scanf("%d%d",&n,&d))
    {
        for(int i=1; i<=n; i++)
        {
           scanf("%d%d",&qq[i].x,&qq[i].y);
            qq[i].flag = false;
			fa[i]=i;
        }
        char s[20];
        int num,l,r;
        while(~scanf("%s",s))
        {
            if(s[0]=='O')
            {
                scanf("%d",&num);
                qq[num].flag = true;
                for(int i=1;i<=n;i++)
				{
					int len = dis(qq[i],qq[num]);
					if(len<=d*d&&qq[i].flag)
					{
						Union(i,num);
					}
				}
//				cout<<endl;
//				for(int i=1;i<=n;i++)
//					cout<<fa[i]<<" ";
//				cout<<endl;
            }
            if(s[0]=='S')
			{
                scanf("%d%d",&l,&r);
                if(finds(l)==finds(r)&&qq[l].flag&&qq[r].flag)
				{
					printf("SUCCESS\n");
				}
				else
				{
					printf("FAIL\n");
				}
			}
        }
    }


}
