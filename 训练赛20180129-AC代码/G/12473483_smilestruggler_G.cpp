#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1005];
int main(){
	int n,num,temp;
	while(~scanf("%d",&n)){
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		num=0,temp=0;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			if(a[i]==a[i+1]){
				temp++;
			}
			else{
				temp=0;
			}
			if(num<temp){
				num=temp;
			}
		}
		printf("%d\n",n-num-1);
	}
}