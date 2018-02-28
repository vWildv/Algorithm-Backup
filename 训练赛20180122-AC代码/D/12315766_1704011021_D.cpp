#include<stdio.h>
#include<cstring>
int s[1000000];
int main()
{
    int n,m,z,q=0;
    while(~scanf("%d",&n))
    {
        memset(s,0,sizeof(s));
        z=(n+1)/2;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            s[m]++;
            if(s[m]>=z)
            {
                q=m;
            }
        }
        printf("%d\n",q);
    }
    return 0;
}
