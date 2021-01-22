#include <bits/stdc++.h>
using namespace std;

int a[300005];

int main(){
    int n;
    scanf("%d",&n);
    long long sum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    sort(a+1,a+1+n);
    long long res=sum;
    for(int i=1;i<n;i++){
        res+=a[i];
        sum-=a[i];
        res+=sum;
    }
    printf("%lld\n",res);
}

