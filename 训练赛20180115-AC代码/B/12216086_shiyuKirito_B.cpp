#include<stdio.h>
using namespace std;
const int maxn=50005;
int N ,M,x,b;
int a[maxn];
void init()
{
    for(int i=0;i<N;i++)
    {
        a[i]=i;
    }
}
int findzuxian(int n)
{

    if(a[n]==n)
        return a[n];
    else
    {
        return a[n]=findzuxian(a[n]);
}
}
void chuanran(int x,int y)
{
    if(x>y)
    {
        a[findzuxian(x)]=findzuxian(y);
    }
    else
    {
        a[findzuxian(y)]=findzuxian(x);
    }
    return ;
}
int main ()
{
    while(~scanf("%d%d",&N,&M))
    {
        init();
        for(int i=1;i<=M;i++)
        {
            scanf("%d%d",&x,&b);
            chuanran(x,b);
        }
        int ans=0;
        for(int i=0;i<N;i++)
        {
            if(findzuxian(i)==a[0])
            {
                ans++;
            }
        }
         printf("%d\n",ans);
    }
    return 0;
}
