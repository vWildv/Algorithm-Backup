#include<iostream>
#include<cstdio>
using namespace std;
int jiance(int hour,int min){
	int flag=0;
	int temp=hour%10;
	if(temp==7){
		flag=1;
	}
	temp=hour/10;
	if(temp==7){
		flag=1;
	}
	temp=min/10;
	if(temp==7){
		flag=1;
	}
	temp=min%10;
	if(temp==7){
		flag=1;
	}
	if(flag){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int x,hour,min,num;
	while(~scanf("%d",&x)){
		num=0;
		scanf("%d%d",&hour,&min);
		while(jiance(hour,min)==0){
			int temp=hour*60+min;
			temp-=x;
			if(temp<0){
				temp+=24*60;
			}
			hour=temp/60;
			min=temp-hour*60;
			num++;
		}
		printf("%d\n",num);
	}
	return 0;
} 