#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cmath>
using namespace std;
#define N 40005
int a[N];
int arr[N];
int UNDER_pos(int *dp,int l,int r,int key)
{
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(dp[mid]>key)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return l;
}
int main()
{
    memset(arr,0,sizeof(arr));
    int n;
    while(~scanf("%d",&n))
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        arr[1]=a[0];
        int len=1;
        for(int i=1; i<n; i++)
        {
            if(a[i]>arr[len])
            {
                arr[++len]=a[i];
            }
            else
            {
                int pos=UNDER_pos(arr,1,len,a[i]);
                arr[pos]=a[i];
            }
        }

        printf("%d\n",len);
    }
}
