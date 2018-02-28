#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main (){
  int n,a,b,step,p;
  while (~scanf("%d%d%d",&n,&a,&b)){
  if (b>=n || b<=-n){
    b=b%n;
  }
  if (b>=0){
    if (a+b>n){
        p=(a+b)%n;
      printf("%d\n",p);
    }else{
    p=a+b;
    printf("%d\n",p);
  }
  }else{
       if (a+b>0){
        p=a+b;
       printf("%d\n",p);
    }else{
        p=a+b+n;
       printf("%d\n",p);
    }
  }
}
  return 0;
}
