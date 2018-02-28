#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int sum=(n+1)/2;
        int num,ma;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ma);
            a[ma]++;
            if(a[ma]>=sum)
            {
                num=ma;
            }
        }
        printf("%d\n",num);
    }
    return 0;
}
