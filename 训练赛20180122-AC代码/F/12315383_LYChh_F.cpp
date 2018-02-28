#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int ma,ans=1;
        memset(a,0,sizeof(a));
        scanf("%d",&a[0]);
        for(int i=1;i<n;i++)
        {
            int sum=1;
            scanf("%d",&ma);
            for(int j=0;j<ans;j++)
            {
                if(a[j]>ma)
                {
                    a[j]=ma;
                    sum=0;
                    break;
                }
            }
            if(sum==1)
            {
                a[ans++]=ma;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
