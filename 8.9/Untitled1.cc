#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll ra=35111;
string s;
int vis[30];
int sum[1505];
unordered_set<ll> mp;

int main(){
    cin>>s;
    getchar();
    int n=s.length();
    for(int i=1;i<=26;i++){
        char tmp;
        scanf("%c",&tmp);
        vis[i]=tmp-'0';
    }
    int k;
    scanf("%d",&k);
    for(int i=1;i<=n;i++){
        sum[i]=sum[i-1];
        if(vis[s[i-1]-'a'+1]==0) sum[i]++;
    }
    for(int i=1;i<=n;i++){
        ll has=0;
        for(int j=i;j<=n;j++){
            if(sum[j]-sum[i-1]>k) break;
            has=has*ra+(ll)(s[j-1]-'a'+1);
            mp.insert(has);
        }
    }
    ll cnt=mp.size();
    printf("%lld\n",cnt);
}


