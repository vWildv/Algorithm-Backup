#include <bits/stdc++.h>
using namespace std;

const int N=100005;

struct node{
    int v,id;
};
vector<node> g[N];
vector<int> ans;
int vis[N];
int res;

int dfs(int u,int id){
	int len=g[u].size();
	int flag=0;
	vis[u]=1;
	for(int i=0; i<len; ++i){
		int v=g[u][i].v;
		if(vis[v]) continue;
		if(g[u][i].id==2) flag+=dfs(v,1);
		else flag+=dfs(v,0);
	}
	if(id&&flag==0){
        res++;
		ans.push_back(u);
		return 1;
	}
	return flag;
}

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        int u; node tmp;
        scanf("%d%d%d",&u,&tmp.v,&tmp.id);
        g[u].push_back(tmp);
        swap(u,tmp.v);
        g[u].push_back(tmp);
    }
    vis[1]=1;
    dfs(1,0);
    printf("%d\n",res);
    for(int i=0;i<ans.size();i++){
        printf("%d ",ans[i]);
    }
}
