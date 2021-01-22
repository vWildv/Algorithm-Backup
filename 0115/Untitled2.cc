#include <bits/stdc++.h>
using namespace std;

char a[105];
long long k;
long long ans;

long long f(int n){
    if(n==0) return 0;
    int pos=n;
    long long cnt=0,t=1;
    for(int i=n;i>=1&&t<k;i--,t*=10){
        if((cnt+(a[i]-'0')*t)<k){
            cnt+=(a[i]-'0')*t;
            if(a[i]!='0') pos=i;
        }
        else break;
    }
    ans=f(pos-1)*k+cnt;
    return ans;
}

int main(){
    scanf("%lld",&k);
    scanf("%s",a+1);
    //printf("%s",a);
    f(strlen(a+1));
    printf("%lld\n",ans);
}
