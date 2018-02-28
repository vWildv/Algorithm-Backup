#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,m;
        scanf("%d%d",&n,&m);
        long long ans=0;
        for(int i=1;i<=n;i++){
            long long st=1;
            for(int j=1;j<=m;j++){
                st*=i;
                st%=(int)1e9+7;
            }
            ans+=st;
            ans%=(int)1e9+7;
        }
        printf("%lld\n",ans);
    }
}