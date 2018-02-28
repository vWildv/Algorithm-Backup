#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
using namespace std;
#define maxn 200005



int main()
{
    int n;
    int a[maxn];
    while(~scanf("%d",&n))
    {
        int i;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            if(a[i]<0) break;
            else if(a[i]%2==1)
            {
                a[i+1]--;
            }
        }
        if(i!=n-1) printf("NO\n");
        else
        {
            if(a[i]%2==0) printf("YES\n");
            else printf("NO\n");
        }

    }
}




