#include<bits/stdc++.h>
using namespace std;

int a[100005];
set<int> s;
unordered_map<int,int> vis;
unordered_map<int,int> cnt;

int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=k;i++){
        cnt[a[i]]++;
        if(vis[a[i]]==1) continue;
        if(cnt[a[i]]==1){
            s.insert(a[i]);
        }
        else{
            if(cnt[a[i]]>=2) vis[a[i]]=1;
            s.erase(s.find(a[i]));
        }
    }
    set<int>::iterator it=s.end();
    it--;
    printf("%d\n",*it);
    for(int i=1,j=k+1;j<=n;i++,j++){
        cnt[a[i]]--; cnt[a[j]]++;
        if(cnt[a[i]]==1){
            vis[a[i]]=0;
            s.insert(a[i]);
        }
        else if(cnt[a[i]]==0){
            s.erase(s.find(a[i]));
        }
        //if(vis[a[j]]==1)
        if(cnt[a[j]]==1){
            s.insert(a[j]);
        }
        else{
            if(vis[a[j]]!=1) s.erase(s.find(a[j]));
            if(cnt[a[j]]>=2) vis[j]=1;
            //if(vis[a[j]]!=1) s.erase(lower_bound(s.begin(),s.end(),a[j]));
        }
        if(s.size()==0){
            printf("Nothing\n");
            continue;
        }
        set<int>::iterator it=s.end();
        it--;
        printf("%d\n",*it);
    }
}
