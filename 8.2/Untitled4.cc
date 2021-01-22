#include<bits/stdc++.h>
using namespace std;

long long a[100005],ans[100005];
long long tmp[100005];
int q[100005],fa[100005];
int vis[100005];
int n;

int fin(int x){
	return fa[x]==x?x:fa[x]=fin(fa[x]);
}

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++) fa[i]=i;
	for(int i=1;i<=n;i++) scanf("%lld",&a[i]);
	for(int i=1;i<=n;i++) scanf("%d",&q[i]);
	ans[n]=0;
	for(int i=n;i>1;i--){
		int p1=q[i];
		tmp[p1]=a[p1];
		if(vis[p1-1]){
			int f1=fin(p1);
			int f2=fin(p1-1);
			fa[f1]=f2;
			tmp[f2]+=tmp[f1];
		}
		if(vis[p1+1]){
			int f1=fin(p1);
			int f2=fin(p1+1);
			fa[f1]=f2;
			tmp[f2]+=tmp[f1];
		}
		ans[i-1]=max(tmp[fin(p1)],ans[i]);
		vis[p1]=1;
	}
	for(int i=1;i<=n;i++) printf("%lld\n",ans[i]);
}

