#include <bits/stdc++.h>
using namespace std;

struct node{
    long long x,y,z;
}a[3005];

int bigger(node a,node b){
    if(a.x>b.x&&a.y>b.y) return 1;
    if(a.x>b.y&&a.y>b.x) return 1;
    return 0;
}

long long calc(node a,node b){
    long long res=0x3f3f3f3f3f3f3f3f;
    if(a.x>b.x&&a.y>b.y){
        res=min(res,(a.x-b.x-a.y+b.y)*(a.x-b.x-a.y+b.y));
    }
    if(a.x>b.y&&a.y>b.x){
        res=min(res,(a.y-b.x-a.x+b.y)*(a.y-b.x-a.x+b.y));
    }
    return res;
}

bool cmp(node a,node b){
    return a.x*a.y>b.x*b.y;
}

long long high[3005],twist[3005];

int main(){
    int n;
    scanf("%d",&n);
    n*=3;
    for(int i=1;i<=n;i++){
        scanf("%lld%lld%lld",&a[i].x,&a[i].y,&a[i].z);
        a[++i].x=a[i-1].y,a[i].y=a[i-1].z,a[i].z=a[i-1].x;
		a[++i].x=a[i-1].y,a[i].y=a[i-1].z,a[i].z=a[i-1].x;
    }
    long long maxnh=-1,mint=0x3f3f3f3f3f3f3f3f;
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(bigger(a[j],a[i])){
                if(high[i]<high[j]){
                    high[i]=high[j];
                    twist[i]=twist[j]+calc(a[j],a[i]);
                }
                if(high[i]==high[j]){
                    twist[i]=min(twist[i],twist[j]+calc(a[j],a[i]));
                }
            }
        }
        high[i]+=a[i].z;
        if(high[i]>maxnh){
            maxnh=high[i];
            mint=twist[i];
        }
        if(high[i]==maxnh){
            mint=min(mint,twist[i]);
        }
    }

    printf("%lld %lld\n",maxnh,mint);
}
