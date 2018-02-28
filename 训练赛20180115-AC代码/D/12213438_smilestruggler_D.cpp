#include<iostream>
using namespace std;
int main(){
	int a[48],n,i;
	a[1]=2,a[2]=3;
	for(i=3;i<=47;i++){
		a[i]=a[i-2]+a[i-1];
	}
	while(~scanf("%d",&n)&&n){
		for(i=0;i<=47;i++){
			if(a[i]==n){
				break;
			}
		}
		if(i==48){
			printf("First win\n");
		}
		else{
			printf("Second win\n");
		}
	}
	return 0;
} 