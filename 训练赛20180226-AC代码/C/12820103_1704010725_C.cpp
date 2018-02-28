#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int a[10005],b[10005],ans=2;

int f(int n){
    for(int i=2;i<=n;i++){
        a[i]=b[i-1]-a[i-1]-a[i-2];
        if(a[i]!=1&&a[i]!=0){
            ans--;
            break;
        }
        if(i==n){
            if(b[i]!=a[i-1]+a[i]){
                ans--;
                break;
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&b[i]);
    a[1]=0;
    f(n);
    a[1]=1;
    f(n);
    printf("%d\n",ans);
}
