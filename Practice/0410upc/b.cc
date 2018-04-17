#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);
    long long ans=0,flag=0;
    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d",&tmp);
        ans+=(tmp+flag)/2;
        if(tmp>0) flag=(tmp+flag)%2;
        else flag=0;
    }
    printf("%lld\n",ans);
}