#include<iostream>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
 int main (){
   int n,ans,m,flag;
   int a[1005];
   int b[1005];
   while (~scanf("%d",&n)){
    memset(b,0,sizeof(b));
    ans=1;
    for (int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
   int maxx=0;
   int  maxx1=0;
    for (int i=1;i<n;i++){
        maxx1=0;
         for (int j=i+1;j<=n;j++){
            if (a[i]==a[j]){
                maxx1++;
            }else{
             break;
            }
         }
        maxx=max(maxx,maxx1);
    }
    printf("%d\n",n-maxx-1);
   }
   return 0;
 }
