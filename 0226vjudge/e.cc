#include <math.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll; 

ll a[100005],p[100005],mini[100005];

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++) scanf("%lld%lld",&a[i],&p[i]);
        ll tmpMin=0x3f3f3f3f3f3f3f3fLL;
        for(int i=n-1;i>=0;i--){
            tmpMin=min(a[i]*p[i],tmpMin);
            mini[i]=tmpMin;
        }
        for(int i=0;i<m;i++){
            int ques;
            scanf("%d",&ques);
            if(ques>=a[n-1]) printf("%lld\n",ques*p[n-1]);
            else{
                int pos=upper_bound(a,a+n,ques)-a;
                ll ans=ques*p[pos-1];
                ans=min(ans,mini[pos]);
                printf("%lld\n",ans);
            }
        }
    }
}