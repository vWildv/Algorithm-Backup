#include<stdio.h>
#include<string.h>
#include<string>
#include<cmath>
#include<algorithm>
#include<iostream>
#include<sstream>
#define maxsize 100
#define infinity 0x3f3f3f3f
#define maxnum 1000000007
using namespace std;
int fa[1000010];
int flag[1000010];
int ans;
int Find(int a)
{
    int r=a,t;
    while(r!=fa[r])
    {
        t=r;
        r=fa[r];
        fa[t]=fa[r];
    }
    return r;
}
void join(int a,int b)
{
    int m=Find(a);
    int n=Find(b);
    if(m!=n)
    {
        ans--;
        fa[n]=m;
    }

}
int main()
{

    int i,j,n,m;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        for(i=0; i<=n; i++)
            fa[i]=i;
        int a,b;
        int tmp;
        ans=n;
        for(i=0; i<m; ++i)
        {
            scanf("%d%d",&a,&b);
            if(a>b)
            {
                tmp=a;
                a=b;
                b=tmp;

            }
            join(a,b);
        }
        printf("%d\n",ans);

    }
    return 0;
}
/*
2
5 3
2 1
3 2
5 4


5 4
1 2
2 5
3 4
1 3

5 1
2 5
*/
