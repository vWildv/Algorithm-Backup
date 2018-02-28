#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
	int n,a,b;
	while(~scanf("%d%d%d",&n,&a,&b)){
		int temp=a+b;
		while(temp>n){
			temp-=n;
		}
		while(temp<1){
			temp+=n;
		}
		printf("%d\n",temp);
	}
}