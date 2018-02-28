#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include<cstring>
#include<map>
using namespace std;
map<int,int>tong; 
int main(){
	int n,m,sum,a;
	int ans[100005];
	while(~scanf("%d%d",&n,&m)){
		memset(ans,0,sizeof(ans));
		sum=0;
		int num=0;
		tong.clear();
		for(int i=0;i<n;i++) {
			cin>>a;
			tong[a]=1;
		}
		for(int i=1;i<=1000000000;i++){
			if(tong[i]){
				continue;
			}
			if(sum+i>m){
				break;
			}
			sum+=i;
			ans[num]=i;
			num++;
		}
		printf("%d\n",num);
		for(int i=0;i<num;i++){
			printf("%d",ans[i]);
			if(i!=num-1){
				printf(" ");
			}
			else{
				printf("\n");
			}
		}
	}
		
	return 0;
}