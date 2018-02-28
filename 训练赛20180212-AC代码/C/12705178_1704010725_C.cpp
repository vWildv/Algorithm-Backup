#include <map>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

long long cnt[400005],sum_cnt[400005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        long long tmp;
        scanf("%lld",&tmp);
        cnt[tmp]++;
    }
    long long ans=0;
    for(int i=200000;i>0;i--) 
        sum_cnt[i]=sum_cnt[i+1]+cnt[i];
    for(int i=1;i<200001;i++)
        if(cnt[i]>0){
            long long sum=0;
            for(int j=i;j<200001;j+=i) 
            sum+=(sum_cnt[j]-sum_cnt[j+i])*j;
            ans=max(sum,ans);
        }
    cout<<ans<<endl;
}