#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct Tree{
    ll h;
    int c;
    ll p;
}t[100005];
vector<ll> v;
ll sum[100005],cost[100005];
ll hh[100005];
ll vis[210];
bool cmp(Tree x,Tree y){
    return x.h<y.h;
}
int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++){
            scanf("%lld%d%lld",&t[i].h,&t[i].c,&t[i].p);
        }
        sort(t,t+n,cmp);
        ll tmp=t[0].h;
        ll cnt=0LL;
        ll t_cost=0LL;
        int j=1;
        sum[0]=cost[0]=0LL;
        v.clear();
        for(int i=0;i<n;i++){
            if(tmp==t[i].h){
                cnt+=t[i].p;
                t_cost+=((ll)t[i].c)*t[i].p;
            }
            else{
                v.push_back(cnt);
                hh[j-1]=tmp;
                sum[j]=sum[j-1]+cnt;
                cost[j]=cost[j-1]+t_cost;
                j++;
                tmp=t[i].h;
                cnt=t[i].p;
                t_cost=((ll)t[i].c)*t[i].p;
            }
        }
        v.push_back(cnt);
        hh[j-1]=tmp;
        sum[j]=sum[j-1]+cnt;
        cost[j]=cost[j-1]+t_cost;
        j++;
        int len=v.size();
        ll ans=0x3f3f3f3f3f3f3f3f;
        int q=0;
        for(int i=0;i<=205;i++){
            vis[i]=0;
        }
        for(int i=0;i<len;i++){
           ll s=sum[i+1]-sum[0];
           ll c=cost[len]-cost[i+1];
           if(2LL*v[i]>s){
            ans=min(ans,c);
           }
           else{
            for(j=1;j<=200;j++){
                if(vis[j]!=0){
                    s-=vis[j];
                    c+=(vis[j])*j;
                    if(s<2LL*v[i]-1LL){
                        c-=(2LL*v[i]-1LL-s)*j;
                        s=2LL*v[i]-1LL;
                    }
                }
                if(s==2LL*v[i]-1LL){
                    break;
                }
            }
            ans=min(ans,c);
           }
           while(q<n&&t[q].h<=hh[i]){
            vis[t[q].c]+=t[q].p;
            q++;
           }
        }
        printf("%lld\n",ans);
    }
    return 0;
}
