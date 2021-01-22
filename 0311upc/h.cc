#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int a[300005],dpi[300005],dpd[300005];

int main(){
    int n=0;
    while(scanf("%d",&a[n])!=EOF){
        dpi[n]=1;
        dpd[n]=1;
        n++;
    }
    int ans=1,ans2=1;
    for(int i=1;i<n;i++){
        for(int j=0; j<i; j++){
            if(a[i]>a[j])dpi[i]=max(dpi[i],dpi[j]+1);
            if(a[i]<a[j])dpd[i]=max(dpd[i],dpd[j]+1);
        }
        ans=max(ans,dpi[i]);
        ans2=max(ans2,dpd[i]);
    }
    printf("%d\n%d\n",ans2,ans);
    return 0;
}
