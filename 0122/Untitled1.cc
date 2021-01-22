#include <bits/stdc++.h>
using namespace std;

int main(){
    long long m,b;
    scanf("%lld%lld",&m,&b);
    long long res=0; long long ans=0;
    for(long long y=b;y>=0;y--){
        res=(y+1)*(y)*(m*b-m*y+1)+(m*b-m*y)*(m*b-m*y+1)*(y+1);
        ans=max(ans,res);
    }
    printf("%lld\n",ans/2);
}
