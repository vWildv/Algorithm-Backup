#include <bits/stdc++.h>
using namespace std;

#define ll long long
int n;
ll s;
ll a[40];
const ll inf=0x3f3f3f3f3f3f3f3f;

vector<pair<ll,ll> > mp;
vector<int> ans;

int main(){
    scanf("%d%lld",&n,&s);
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    int n1=n/2;
    int st=1<<n1;
    for(int i=0;i<st;i++){
        ll sum=0;
        for(int j=0;j<n1;j++){
            if(i&(1<<j)){
                sum+=a[j];
            }
        }
        mp.push_back(make_pair(sum,(ll)i));
    }
    sort(mp.begin(),mp.end());
    st=1<<(n-n1);
    for(int i=0;i<st;i++){
        ll sum=0;
        for(int j=0;j<n-n1;j++){
            if(i&(1<<j)){
                sum+=a[j+n1];
            }
        }
        int pos=lower_bound(mp.begin(),mp.end(),make_pair(s-sum,inf))-mp.begin();
        pos--;
        if(sum+mp[pos].first==s){
            int sst=mp[pos].second;
            for(int k=0;k<n1;k++){
                if(sst&(1<<k)){
                    ans.push_back(1);
                }
                else ans.push_back(0);
            }
            for(int k=0;k<n-n1;k++){
                if(i&(1<<k)){
                    ans.push_back(1);
                }
                else ans.push_back(0);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        printf("%d",ans[i]);
    }
}
