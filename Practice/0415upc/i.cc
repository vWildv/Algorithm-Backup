#include <bits/stdc++.h>
using namespace std;

vector<int> a[1000005];
int cnt[1000005];

void dfs(int p,int q){
    cnt[p]=1;
    for(int i=0;i<a[p].size();i++)
        if(a[p][i]!=q) dfs(a[p][i],p),cnt[p]+=cnt[a[p][i]];
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int tmp,vtmp;
        scanf("%d%d",&tmp,&vtmp);
        a[tmp].push_back(vtmp);
        a[vtmp].push_back(tmp);
    }
    dfs(1,-1);
    for(int i=1;i<n;i++){
        if(n%(i+1)==0){
            int num=n/(i+1),res=0;
            for(int j=1;j<=n;j++)
                if(cnt[j]%num==0) res++;
            if(res==i+1) printf("%d ",i);
        }
    }
    printf("\n");
}