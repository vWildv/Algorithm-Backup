#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,ans=3;
        scanf("%lld",&n);
        while(n--){
            ans=(ans-1)*2;
        }
        printf("%lld\n",ans);
    }
}