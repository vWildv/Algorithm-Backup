#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int a[100005],pre[100005],back[100005];
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int main(){
	int t,n,ans;
	scanf("%d",&t);
	while(t--){
		ans=0;
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		pre[0]=a[0];
		for(int i=1;i<n;i++){
			pre[i]=gcd(pre[i-1],a[i]);
		}
		back[n-1]=a[n-1];
		for(int i=n-2;i>=0;i--){
			back[i]=gcd(back[i+1],a[i]);
		}
		int ans=max(pre[n-2],back[1]);
		for(int i=1;i<n-1;i++){
			ans=max(ans,gcd(pre[i-1],back[i+1]));
		}
		printf("%d\n",ans);
	}
	return 0;
} 