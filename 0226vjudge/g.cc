#include <map>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

map<int,int> bit;

int main(){
    ll n,k;
    scanf("%lld%lld",&n,&k);
    for(int i=0;n;n/=2,i++){
        bit[i]=n%2;
        k-=bit[i];
    }
    if(k<0) printf("No\n");
    else{
        for(int i=63;;i--){
            if(bit[i]>k) break;
            k-=bit[i];
            bit[i-1]+=bit[i]*2;
            bit[i]=0;
        }
        int cnt=-64;
        while(!bit[cnt]) cnt++;
        bit[cnt]--;
        printf("Yes\n");
        for(int i=63;i>=cnt;i--)
            while(bit[i]--) printf("%d ",i);
        for(int i=1;i<=k;i++) printf("%d ",cnt-i);
        printf("%d\n",cnt-k);
    }
}
