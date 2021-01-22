#include <bits/stdc++.h>
using namespace std;

#define pa(a,b) make_pair(a,b)
const int inf=0x3f3f3f3f;

int n;
vector<pair<string,pair<int,int> > > a;
struct node{
    int sum,re=inf;
    int pre;
    int ps;
}dp[(1<<16)];

void solve(){
    int st=(1<<n);
    for(int i=1;i<st;i++) dp[i].re=inf;
    for(int i=1;i<st;i++){
        for(int j=0;j<n;j++){
            int ps=(1<<j);
            if((i&ps)==0) continue;
            if(i-ps==0){
                dp[i].sum=a[j].second.second;
                dp[i].re=max(dp[i].sum-a[j].second.first,0);
                dp[i].pre=j;
                dp[i].ps=0;
                continue;
            }
            int dd=dp[i-ps].sum+a[j].second.second;
            int cc=dp[i-ps].re+max(dd-a[j].second.first,0);
            if(cc<=dp[i].re){
                dp[i].re=cc;
                dp[i].sum=dd;
                dp[i].pre=j;
                dp[i].ps=i-ps;
            }
        }
    }
    printf("%d\n",dp[st-1].re);
    stack<int> s;
    int last=st-1;
    while(last){
        s.push(dp[last].pre);
        last=dp[last].ps;
    }
    while(!s.empty()){
        cout<<a[s.top()].first<<endl;
        s.pop();
    }
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        getchar();
        a.clear();
        for(int i=1;i<=n;i++){
            string tmp;
            cin>>tmp;
            int d,c;
            scanf("%d%d",&d,&c);
            a.push_back(pa(tmp,pa(d,c)));
        }
        solve();
    }
}
