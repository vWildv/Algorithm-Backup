#include <bits/stdc++.h>
using namespace std;

struct node{
    int x,pos;
    bool operator < (const node &rhs)const{
        return x>rhs.x;
    }
};

set<node> dp;
vector<int> g[200005];
int a[200005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int cnt=1; set<node>::iterator it;
    for(int i=1;i<=n;i++){
        it=dp.lower_bound((node){a[i],0});
        if(it==dp.end()){
            g[cnt].push_back(a[i]);
            dp.insert((node) {a[i],cnt});
            cnt++;
        }
        else{
            g[it->pos].push_back(a[i]);
            int pp=it->pos; set<node>::iterator tmp=it;
            dp.erase(tmp); dp.insert((node) {a[i],pp});
        }
    }
    for(int i=1;i<cnt;i++){
        for(int j=0;j<g[i].size();j++){
            printf("%d ",g[i][j]);
        }
        printf("\n");
    }
}
