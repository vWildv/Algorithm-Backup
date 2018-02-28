#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int a[1000000];
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        memset(a,0,sizeof(a));
        int ss;
        int vis;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&ss);
            a[ss]++;
            if(a[ss]>=(n+1)/2)
            {
                vis=ss;
            }
        }
        printf("%d\n",vis);
    }
}
