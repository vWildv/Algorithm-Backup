#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,l;
    double mini=0x3f3f3f3f;
    scanf("%d%d%d",&a,&b,&l);
    double c=(double)a/b;
    for(int i=1;i<=l;i++)
        for(int j=1;j<=l;j++){
            double d=(double)i/j;
            if(d<c) break;
            if(d>=c&&d-c<mini) a=i,b=j,mini=d-c;
        }
    printf("%d %d\n",a,b);
}