#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	string a;
	int i;
	while(cin>>a){
		for(i=0;i<a.length();i++){
			if(a[i]=='b'&&a[i+1]=='k'&&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r'){
				break;
			} 
		}
		if(i>a.length()-7){
			printf("Safe\n");
		}
		else{
			printf("Warning\n");	
		}		
	}

	return 0;
} 