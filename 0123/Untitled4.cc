#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long x,y;
        scanf("%lld%lld",&x,&y);
        double tmp=pow(1.0*x*y,1.0/3.0);
        //printf("%lf\n",tmp);
        long long cnt=ceil(tmp);
        //printf("%lld\n",cnt);
        if(cnt*cnt*cnt!=x*y) cnt=0;
        //printf("%d\n",cnt);
        printf("%s\n",cnt&&x%cnt==0&&y%cnt==0?"Yes":"No");
    }
}
