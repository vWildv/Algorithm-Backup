#include<stdio.h>
#include<string.h>
using namespace std;
int a[200005];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int cnt = 0;
        for(int i=n-1; i>=0; i--)
        {
            if(a[i]<0)
            {
                cnt = 0;
                break;
            }
            if(i!=0)
            {
                if(a[i]%2 == 1)
                {
                    a[i-1] -= 1;
                }
            }
            else if(a[i]%2 == 0)
                cnt = 1;
            else cnt = 0;
        }
        if(cnt == 1)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
