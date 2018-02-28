#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int a[1000000];
int n[1000000];
int main (){
  int N;
  while (~scanf("%d",&N)){
    memset(a,0,sizeof(a));
    for (int i=1;i<=N;i++){
        scanf("%d",&a[i]);
    }
    int s=(N+1)/2;int ans=0;
    memset(n,0,sizeof(n));
    for (int i=1;i<=N;i++){
          n[a[i]]++;
    if (n[a[i]]==s){
        ans=a[i];
        break;
    }
    }
   printf("%d\n",ans);
  }
  return 0;
}
