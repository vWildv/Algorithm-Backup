#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,p,q,ans=1;
    while(~scanf("%d%d%d",&n,&p,&q)){
        if(n%2==0) ans=n/2+(p+q+3)/4;
        else{
            if(p>0) p--;
            if(q>0) q--;
            ans=(n-1)/2+(p+q+3)/4+1;
        }
        printf("%d\n",ans);
    }
}