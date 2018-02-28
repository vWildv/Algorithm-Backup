#include <map>
#include <vector>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int col[200010],fa[200010];
vector<int> sock[200010];

int find(int x){
    if(fa[x]==x) return fa[x];
    return fa[x]=find(fa[x]); 
}

void unit(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b) fa[a]=b;
}

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=n;i++){
        fa[i]=i;
        scanf("%d",&col[i]);
    }
    int a,b;
    for(int i=0;i<m;i++){
        scanf("%d%d",&a,&b);
        unit(a,b);
    }
    for(int i=1;i<=n;i++) sock[find(i)].push_back(col[i]);
    int ans=0;
    for(int i=1;i<=n;i++){
        if(sock[i].size()<=1) continue;
        int maxn=-1;
        map<int,int> cnt;
        cnt.clear();
        for(int j=0;j<sock[i].size();j++){
            cnt[sock[i][j]]++;
            maxn=max(maxn,cnt[sock[i][j]]);
        }
        ans+=sock[i].size()-maxn;
    }   
    printf("%d\n",ans);
    return 0;
}