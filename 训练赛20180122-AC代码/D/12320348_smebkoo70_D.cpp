#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
using namespace std;
int a[1000002];
int b[1000002];
int c[1000002];
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int least=(t+1)/2;
        for(int i=0; i<t; i++)
        {
            scanf("%d",&a[i]);
        }
        int sum=0,k=0,n=0;
        int cnt=a[0];
        c[0]=a[0];
        sort(a,a+t);
        for(int i=0; i<t; i++)
        {
            if(a[i]==cnt)
            {
                sum++;
                b[k]=sum;
            }
            else if(a[i]!=cnt)
            {
                cnt=a[i];
                c[++n]=a[i];
                sum=1;
                b[++k]=sum;
            }
        }
        //printf("%d %d %d\n",b[0],b[1],b[2]);
        for(int s=0; s<k; s++)
        {
            if(least<b[s])
                printf("%d\n",c[s]);
            else if(least==b[s])
                printf("%d\n",c[s]);
            else if(least>b[s])
                continue;
        }
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(c,0,sizeof(c));
    }
    return 0;
}
