#include<iostream>
#include<cstdio> 
using namespace std;
int jiec(int n){
	int i,num=0,sum=0;
	for(i=2;i<=n;i++){
		num=0;
		int x=i;
		while(x){
			if(x%2==1){
				break;
			}
			else{
				num++;
				x/=2;
			}
			
		}
		sum+=num;
			
	}
		
		return sum;
}

int main(){
	int n,m,c,t,ans;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&m,&n);
		ans=jiec(m)-jiec(m-n)-jiec(n);

		
		printf("%d\n",ans);		
	}

	return 0;
}