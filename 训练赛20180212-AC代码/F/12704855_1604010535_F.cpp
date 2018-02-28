#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int n,x;
    while(~scanf("%d%d",&n,&x))
    {
        int a,sum=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&a);
            sum+=a;
        }
        if(sum+n-1==x)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }

}

