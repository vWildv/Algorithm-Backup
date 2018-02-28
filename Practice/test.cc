#include <map>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int bit[128];

int main(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    for(int i=0;n;n/=2,i++){
        bit[i+64]=n%2;
        k-=bit[i+64];
    }
    if(k<0) printf("No\n");
    else{
        for(int i=127;i>0;i--){
            if(bit[i]>k) break;
            k-=bit[i];
            bit[i-1]+=bit[i]*2;
            bit[i]=0;
        }
        int cnt=0;
        while(!bit[cnt]) cnt++;
        bit[cnt]--;
        printf("Yes\n");
        for(int i=127;i>=cnt;i--){
            while(bit[i]--) printf("%d ",i-64);
        }
        for(int i=1;i<=k;i++) printf("%d ",cnt-i-64);
        printf("%d\n",cnt-k-64);
    }
}