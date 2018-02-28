#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int juge(int x){
  int k=0;
  int y=x,sum=0;
  int a[20000];
  int t=1;
  while (y/t!=0){
    t=t*10;
    k++;
  }
t=t/10;
  sum=0;
  for (int i=1;i<=k;i++){
    a[i]=x/t;
    x=x%t;
    t=t/10;
    sum=sum+a[i];
  }
  if (sum == 10){return(1);}
  else return(0);
}
int main (){
   int s,t;
   int b[20005];
    t=0;
    for (int i=1;i<=11000000;i++){
        if (juge(i)){
            t++;
            b[t]=i;
        }
     }
   while(~scanf("%d",&s)){
   printf("%d\n",b[s]);
   }
  return 0;
}
