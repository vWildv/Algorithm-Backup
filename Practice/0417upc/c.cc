#include<bits/stdc++.h>
using namespace std;

long long a[100005],b[100005];

int main(){
    int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%lld%lld",&a[i],&b[i]);
	long long ans=0;
	for(int i=n;i>0;i--){
		a[i]+=ans;
		if(a[i]%b[i]!=0) ans+=b[i]-a[i]%b[i];
	}
	printf("%lld",ans);
}