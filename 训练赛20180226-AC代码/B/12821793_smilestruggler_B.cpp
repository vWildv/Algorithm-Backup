#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;
long long a[200005],max1[200005];
int main(){
	int m,d,last,n;
	while(~scanf("%d%d",&m,&d)){
		int len=0;
		last=0;
		for(int i=0;i<m;i++){
			char cmd;
			scanf("%s%d",&cmd,&n);
			if(cmd=='A'){
				a[++len]=(last+n)%d;
				for(int j=len;j>=1;j--){
					if(a[len]>max1[j]){
						max1[j]=a[len];
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