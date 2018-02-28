#include<iostream>
#include<cstdio>
using namespace std;
bool check(int x){
	int k=x,sum=0;
	while(k!=0){
		sum+=k%10;
		k/=10;
	}
	if(sum==10){
		return 1;
	}
	return 0;
}
int main(){
	int k,num;
	while(~scanf("%d",&k)){
		num=1;
		int str=19;
		while(num<k){
			str+=9;
			if(check(str)){
				num++;
			}
		}
		printf("%d\n",str);
	}
	return 0;
}