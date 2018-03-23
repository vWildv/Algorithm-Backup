#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char a[100];

int main(){
    int n,tmp;
    scanf("%d",&n);
    scanf("%s",a);
    int cnt=1;
    for(int i=1;i<n;i++){
        a[i]=a[i]-'0';
        if(a[i]==0&&a[i-1]!=0) printf("%d",cnt),cnt=0;
        else if(a[i]==1) cnt++;
        else if(a[i]==0&&a[i-1]==0) printf("0");
    }
    printf("%d",cnt);
}