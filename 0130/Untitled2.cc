#include <bits/stdc++.h>
using namespace std;

long long a[100005];
long long b[100005];
int n,m,w;

int check(int x){
    long long pos=0; long long cnt=0;
    for(int i=1;i<=n;i++) b[i]=a[i];
    for(int i=1;i<=n;i++){
        if(b[i]<x){
            cnt+=x-b[i];
            //printf("- %d\n",i);
            long long tmp=x-b[i];
            for(int j=i;j<=min(i+w-1,n);j++){
                b[j]+=tmp;
                //printf("%d %d\n",j,b[j]);
            }
        }
    }
    //printf("-- %d %d\n",cnt,m);
    if(cnt>m) return 1;
    else if(cnt==m) return 0;
    else return -1;
}

int main(){
    scanf("%d%d%d",&n,&m,&w);
    for(int i=1;i<=n;i++){
        scanf("%lld",&a[i]);
    }
    long long l=0,r=1e9+1;
    long long ans=0;
    //check(3);
    while(l<=r){
        long long mid=(l+r)>>1;
        //printf("%d\n",mid);
        if(check(mid)==1){
            r=mid-1;
        }
        else if(check(mid)==-1){
            l=mid+1;
        }
        else{
            ans=mid;
            break;
        }
    }
    printf("%lld\n",ans?ans:r);
}
