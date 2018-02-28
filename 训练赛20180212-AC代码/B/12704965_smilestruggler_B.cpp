#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
int a[200005],pre[200005];
vector<int>col[200005];
map<int,int>mp;
int Find(int x){
	int r=x;
	while(r!=pre[r]){
		r=pre[r];
	}
	int i=x,j;
	while(r!=pre[i]){
		j=pre[i];
		pre[i]=r;
		i=j;
	}
	return r;
}
int main(){
	int n,m,k,x,y,ans,temp;
	while(~scanf("%d%d%d",&n,&m,&k)){
		for(int i=1;i<=n;i++){
			scanf("%d",&a[i]);
			pre[i]=i;
			col[i].clear();
		}
		for(int i=0;i<m;i++){
			scanf("%d%d",&x,&y);
			int fx=Find(x);
			int fy=Find(y);
			if(fx!=fy){
				pre[fx]=fy;
			}
		}
		for(int i=1;i<=n;i++){
			int k=Find(i);
		}
		for(int i=1;i<=n;i++){
			col[pre[i]].push_back(i);
		}
		ans=0;
		for(int i=1;i<=n;i++){
			int w=col[i].size();
			if(w==0||w==1){
				continue;
			}
			mp.clear();
			temp=0;
			for(int j=0;j<w;j++){
				mp[a[col[i][j]]]++;
				temp=max(mp[a[col[i][j]]],temp);
			}
			ans+=w-temp;
		}
		printf("%d\n",ans);
	}
	return 0;
}