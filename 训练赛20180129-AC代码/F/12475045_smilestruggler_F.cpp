#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int x[1005],y[1005];
int check(int x1,int y1,int x2,int y2,int x3,int y3){
	int xx1=x2-x1,yy1=y2-y1;
	int xx2=x3-x2,yy2=y3-y2;
	if(xx1*yy2-xx2*yy1>0){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	while(~scanf("%d",&n)){
		int num=0;
		for(int i=0;i<=n;i++){
			scanf("%d%d",&x[i],&y[i]);
		}
		for(int i=0;i<n-2;i++){
			if(check(x[i],y[i],x[i+1],y[i+1],x[i+2],y[i+2])){
				num++;
			}
		}
		printf("%d\n",num);
	}
}