#include <map>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;

int cal(int num){
	int ans=0;
	while (num){
		ans+=num%10;
		num/=10;
	}
	return ans;
}

int main(){
    int n;
	scanf("%d",&n);
	int ans=0;
	while(n){
		ans++;
		if(cal(ans)==10) n--;
	}
	printf("%d\n", ans);
}