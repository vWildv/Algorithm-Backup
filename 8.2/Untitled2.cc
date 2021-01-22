#include<bits/stdc++.h>
using namespace std;

int a[100005];
priority_queue<int> q;
vector<int> h;
int vis[100005];

int pos(int x){
    int p=lower_bound(h.begin(),h.end(),x)-h.begin();
    return p;
}

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        h.push_back(a[i]);
    }
    sort(h.begin(),h.end());
    h.erase(unique(h.begin(),h.end()),h.end());
    for(int i=1;i<=k;i++){
        int p=pos(a[i]);
        vis[p]++;
        if(vis[p]==1) q.push(p);
    }
    while((!q.empty())&&vis[q.top()]!=1) q.pop();
    if(q.empty()) printf("Nothing\n");
    else printf("%d\n",h[q.top()]);

    for(int i=1,j=k+1;j<=n;j++,i++){
        int p1=pos(a[i]);
        int p2=pos(a[j]);
        vis[p1]--;
        vis[p2]++;
        if(vis[p1]==1) q.push(p1);
        if(vis[p2]==1) q.push(p2);
        while((!q.empty())&&vis[q.top()]!=1) q.pop();
        if(q.empty()) printf("Nothing\n");
        else printf("%d\n",h[q.top()]);
    }
}


