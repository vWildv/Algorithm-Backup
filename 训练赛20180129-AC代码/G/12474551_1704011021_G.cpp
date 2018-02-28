#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int a[1005];
int b[1005];
bool cmp(int x,int y)
{
    return x>y;
}
int main()
{
    int t;
    while(~scanf("%d",&t))
    {
        memset(b,0,sizeof(b));
        for(int i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]]++;
        }
        sort(b,b+1005,cmp);
        int num=0;
        for(int i=1;i<t;i++)
        {
            num+=b[i];
        }
        printf("%d\n",num);
    }
}
