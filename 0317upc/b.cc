#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){  
    int n,ans=0;  
    scanf("%d",&n); 
    if(n<0){  
      printf("-");
      n=n*(-1);
    }
    while(n>0){
        ans=ans*10+n%10;
        n=n/10;
    }  
    printf("%d\n",ans);   
    return 0;
}