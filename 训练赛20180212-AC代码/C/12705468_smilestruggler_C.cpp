#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
int a[200005],num[200005],vis[200005],n;
long long ans,temp;
int main(){
	while(~scanf("%d",&n)){
		ans=0;
		memset(vis,0,sizeof(vis));
		memset(num,0,sizeof(num));
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			num[a[i]]++;
		}
		sort(a,a+n);
		for(int i=1;i<=200000;i++){
			num[i]+=num[i-1];
		}
		for(int i=0;i<n;i++){
			if(!vis[a[i]]){
				vis[a[i]]=1;
				temp=0;
				for(int j=1;j*a[i]<=a[n-1];j++){
					int m=(j+1)*a[i]-1;
					m=min(m,200000);
					temp+=(long long)(num[m]-num[j*a[i]-1])*j*a[i];
				}
				ans=max(temp,ans);
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}