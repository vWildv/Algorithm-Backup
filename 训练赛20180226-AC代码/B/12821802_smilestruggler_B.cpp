#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
long long a[200005],max1[200005];
int main(){
	int m;
	long long d;
	char cmd;
	while(~scanf("%d%lld",&m,&d)){
		int len=0;
		long long last=0;
		for(int i=0;i<m;i++){
			long long n;
			scanf("%s%lld",&cmd,&n);
			if(cmd=='A'){
				a[++len]=(last+n)%d;
				for(int i=len;i>=1;i--){
					if(a[len]>max1[i]){
						max1[i]=a[len];
					}
					else{
						break;
					}
				}
			}
			else{
				printf("%lld\n",max1[len-n+1]);
				last=max1[len-n+1];
			}
		}
	}
	return 0;
}