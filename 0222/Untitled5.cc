#include <bits/stdc++.h>
using namespace std;

long long a[1000005];

int main(){
    a[1]=1ll; a[2]=1ll;
    for(long long i=3;i<=1000000;i++){
        a[i]=(a[i-2]*a[i-2]+(a[i-1]*(i-1)))%i;
        //printf("%d\n",a[i]);
    }
    int k;
    scanf("%d",&k);
    printf("%lld\n",a[k]);
}
