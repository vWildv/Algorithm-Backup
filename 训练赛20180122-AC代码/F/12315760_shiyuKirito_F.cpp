#include<stdio.h>
#include<iostream>
using namespace std;
const int maxn=10005;
int  a[maxn];
int  judge[maxn];
int main ()
{
       int  n;
       while(scanf("%d",&n)==1)
       {
           for(int i=0;i<n;i++)
           {
               scanf("%d",&a[i]);
           }
           int ans=1;
           judge[0]=a[0];
           //int flag=0;
           //int gn0;//更新数据
           for(int i=1;i<n;i++)
           {
               int flag=0;
               int min_=0x3f3f3f3f;
               for(int j=0;j<ans;j++)
               {
                   if(judge[j]>=a[i]&&judge[j]<min_)
                   {
                       min_=judge[j] ;
                       flag=1;
                       judge[j]=a[i];
                   }
               }
               if(!flag)
               {
                   judge[ans]=a[i];
                   ans++;
               }
           }
           cout<<ans<<endl;
       }
       return 0;



}
