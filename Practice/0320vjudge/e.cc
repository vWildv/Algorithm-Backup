#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[20005];
    int n,m;
    while(~scanf("%d%d",&n,&m)){
        for(int i=0;i<n+m;i++) scanf("%d",&a[i]);
        sort(a,a+n+m);
        int flag=0;
        for(int i=0;i<n+m;i++){
            if(a[i]!=a[i+1]){
                if(!flag) printf("%d",a[i]),flag=1;
                else printf(" %d",a[i]);
            }
        }
        printf("\n");
    }
}