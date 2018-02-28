#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
struct node{
	string name;
	int team,store;
}a[100005];
bool cmp(node x,node y){
	if(x.team==y.team){
		return x.store>y.store;
	}
	return x.team<y.team;
}
int main(){
	int n,m;
	while(~scanf("%d%d",&n,&m)){
		for(int i=0;i<n;i++){
			cin>>a[i].name;
			scanf("%d%d",&a[i].team,&a[i].store);
		}
		sort(a,a+n,cmp);
		if(a[1].team==a[2].team){
			if(a[1].store==a[2].store){
				printf("?\n");
			}
			else{
					cout<<a[0].name<<" "<<a[1].name;
					printf("\n");
				}				
		}
		else{
				cout<<a[0].name<<" "<<a[1].name;
				printf("\n");
			}
		a[n].team=a[n-1].team,a[n].store=-1;
		for(int i=1;i<n-2;i++){
			if(a[i].team==a[i+1].team){
				continue;
			}
		if(a[i+2].team==a[i+3].team){
			if(a[i+2].store==a[i+3].store){
				printf("?\n");
			}
			else{
					cout<<a[i+1].name<<" "<<a[i+2].name;
					printf("\n");
				}				
		}
		else{
				cout<<a[i+1].name<<" "<<a[i+2].name;
				printf("\n");
			}
			
		}
	}
	return 0;
}