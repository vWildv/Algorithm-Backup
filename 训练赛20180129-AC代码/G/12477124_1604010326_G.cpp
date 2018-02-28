#include<iostream>
#include<algorithm>
#include<map>
#include<stdio.h>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        int a[1001]={0};
        int dp[1001];
        int sum=0;
        int book[1001]={0};
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
     for(int i=0;i<n;i++)
     {
         dp[i]=1;
         for(int j=i-1;j>=0;j--)
         {
             if(a[i]>a[j]&&book[j]==0)
             {
                 dp[i]=dp[j]+1;
                 book[j]=1;
                 break;
             }
         }
     }
     for(int i=0;i<n;i++)
     {
         if(book[i]==0)sum+=(dp[i]-1);
     }
printf("%d\n",sum);
    }
}



