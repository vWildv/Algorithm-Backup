#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long a,b,c,d;
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a<b||d<b){
            printf("No\n");
            continue;
        }
        if(c+1>=b){
            printf("Yes\n");
            continue;
        }
        if(!(d%b)){
            if(a%b<=c) printf("Yes\n");
            else printf("No\n");
            continue;
        }
        long long res=(2*b-__gcd(b,d))%b;
        //printf("-- %lld\n",res);
        if(res<=c) printf("Yes\n");
        else printf("No\n");
    }
}
