#include <bits/stdc++.h>
using namespace std;

map<int,vector<int> > mp;
int vis[50005];

int main(){
    int n;
    scanf("%d",&n);
    int res=0;
    for(int i=1;i<=n;i++){
        int tmp;
        memset(vis,0,sizeof(vis));
        for(int j=1;j<=5;j++){
            scanf("%d",&tmp);
            for(int k=0;k<mp[tmp].size();k++){
                if(vis[mp[tmp][k]]==0){
                    vis[mp[tmp][k]]=1;
                    res++;
                    //printf("-- %d %d\n",tmp,mp[tmp][k]);
                }
            }
            mp[tmp].push_back(i);
        }
    }
    printf("%d\n",n*(n-1)/2-res);
}
