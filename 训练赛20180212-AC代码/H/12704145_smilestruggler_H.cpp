#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[105];
int main(){
	int n,t,num,temp;
	while(~scanf("%d%d",&n,&t)){
		num=0,temp=0;
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
			a[i]=86400-a[i];
		}
		for(int i=0;i<n;i++){
			if(temp<t){
				temp+=a[i];
				num++;
			}
			else{
				break;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}
