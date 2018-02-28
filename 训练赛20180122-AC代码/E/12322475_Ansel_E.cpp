#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int a[100005][11];
int main()
{
    int n;
    int x,t;
    while(~scanf("%d",&n))
    {
        if(n==0)
            break;
        int maxt=0;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            scanf("%d%d",&x,&t);
            a[t][x]++;
            if(maxt<t)
                maxt=t;
        }
         for(int i=maxt-1;i>=0;i--)
        {
            for(int j=1;j<=9;j++)
                a[i][j]+=max(a[i+1][j-1],max(a[i+1][j],a[i+1][j+1]));
            a[i][0]+=max(a[i+1][0],a[i+1][1]);
            a[i][10]+=max(a[i+1][10],a[i+1][9]);
        }
         printf("%d\n",a[0][5]);

    }
}
