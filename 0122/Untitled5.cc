#include <bits/stdc++.h>
using namespace std;

struct line{
    int l,r;
    long long c;
    int id;
}a[200005];

struct node{
    int id;
    int flag;
    int v;
};

map<int,int> p;

vector<node> c;

bool cmp(node a,node b){
    if(a.v==b.v) return a.flag<b.flag;
    return a.v<b.v;
}

int main(){
    int n,x;
    scanf("%d%d",&n,&x);
    int m=0;
    for(int i=1;i<=n;i++){
        scanf("%d%d%lld",&a[i].l,&a[i].r,&a[i].c);
        a[i].id=i;
        node tmp1,tmp2;
        tmp1.flag=1; tmp2.flag=2;
        tmp1.id=i; tmp2.id=i;
        tmp1.v=a[i].l; tmp2.v=a[i].r;
        c.push_back(tmp1);
        c.push_back(tmp2);
    }
    sort(c.begin(),c.end(),cmp);
    long long ans=2e9+1;
    for(int i=0;i<c.size();i++){
        if(c[i].flag==1){
            int dis=a[c[i].id].r-a[c[i].id].l+1;
            if(p[x-dis]){
                int iid=p[x-dis];
                long long res=a[c[i].id].c+a[iid].c;
                ans=min(ans,res);
            }
        }
        else{
            int dis=a[c[i].id].r-a[c[i].id].l+1;
            if(p[dis]){
                if(a[p[dis]].c>a[c[i].id].c){
                    p[dis]=c[i].id;
                }
            }
            else p[dis]=c[i].id;
        }
    }
    printf("%lld\n",ans==2e9+1?-1:ans);
}
