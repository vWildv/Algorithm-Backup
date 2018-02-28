#include<iostream>
#include<cstdio>
using namespace std; 
int check(int n){
	if(n%100==0){
		if(n%400==0){
			return 1;
		}
		else{
			return 0;
		}
	}
	else{
		if(n%4==0){
			return 1;
		}
		else{
			return 0;
		}
	}
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int k=n+1;
		int j=365+check(n);
		while(j%7!=0||check(k)!=check(n)){
			j=(j+365+check(k))%7;
			k++;
		}
		printf("%d\n",k);
	}
	return 0;
}