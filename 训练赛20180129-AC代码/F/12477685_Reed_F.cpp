#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
using namespace std;
int a[1005];
int b[1005];

int judge(int x)
{
    int tmp=(a[x]-a[x-2])*(b[x-1]-b[x-2])-(a[x-1]-a[x-2])*(b[x]-b[x-2]);
    if(tmp<0)
        return 1;
    return 0;
}

int main()
{
    int n;
    int ans=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d%d",&a[i],&b[i]);
    }
    a[n+1]=a[1];
    b[n+1]=b[1];
    for(int i=2;i<=n+1;i++)
    {
        if(judge(i))
        {
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}
