#include<iostream>
#include<cstdio>
#include<string.h>
#include<math.h>
using namespace std;
int prime(int x){
	if(x<2){
		return 0;
	}
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int x,y,z,n;
	while(~scanf("%d",&n)){
		if(n%2==0){
			printf("2 ");
			n-=2;
		}
		else{
			printf("3 ");
			n-=3;
		} 
		for(int i=2;;i++){
			if(prime(i)&&prime(n-i)){
				printf("%d %d\n",i,n-i);
				break;
			}
		}
	}
	return 0;
} 