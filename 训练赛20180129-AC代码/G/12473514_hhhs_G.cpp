#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int n,a[1005],b[1005];
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int i,j,ans;
    while(scanf("%d",&n)!=EOF)
    {
        ans=0;
        memset(b,0,sizeof(b));
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        sort(b,b+1005,cmp);
        for(i=1; i<1005; i++)
        {
            ans+=b[i];
        }
        printf("%d\n",ans);
    }
    return 0;
}
