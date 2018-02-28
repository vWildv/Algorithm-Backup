#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int l,r;
	while(~scanf("%d%d",&l,&r)){
		int num1=0,num2=0;
		if((l==r&&l!=0&&r!=0)||r-1==l||l-1==r){
			printf("YES\n");
		}
		else{
			printf("NO\n");	
		}
		
	}
	return 0;
} 