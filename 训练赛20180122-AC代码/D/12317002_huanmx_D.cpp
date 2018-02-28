#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int a[999999];
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int m,ans;
        memset(a,0,sizeof(a));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&m);
            a[m]++;
            if(a[m]>=(1+n)/2)
            {
               ans=m;
            }
        }
        printf("%d\n",ans);
    }
}
