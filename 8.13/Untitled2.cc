#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int inf=0x3f3f3f3f;

set<int> s;
int vis[300005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) s.insert(i);
    while(m--){
        int l,r,x;
        scanf("%d%d%d",&l,&r,&x);
        set<int>::iterator it=s.lower_bound(l);
        vector<int> tmp;
        for(it;it!=s.end();it++){
            if((*it)>r){
                break;
            }
            if((*it)!=x){
                vis[*it]=x;;
                tmp.push_back(*it);
            }
        }
        for(int i=0;i<tmp.size();i++){
            s.erase(tmp[i]);
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",vis[i]);
    }
    printf("\n");
}
