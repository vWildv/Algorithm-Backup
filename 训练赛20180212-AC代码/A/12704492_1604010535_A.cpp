#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
#define maxn 200100
int a[maxn];
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]==0)continue;
        if(a[i]<0)
        {
            flag=1;
            break;
        }
        if(a[i]&1)a[i+1]--;
    }
    if(a[n]&1)flag=1;
    if(flag)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");

}
