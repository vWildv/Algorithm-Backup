#include <bits/stdc++.h>
using namespace std;

#define ll long long

int f(int p){
    int cnt=0;
    while(p){
        cnt++;
        p/=10;
    }
    return cnt;
}

int main(){
    int n,p;
    scanf("%d%d",&n,&p);
    int cnt=f(p);
    if(n<cnt){
        printf("T_T\n");
        return 0;
    }
    if(n==cnt){
        printf("%d\n",p);
        return 0;
    }
    printf("%d",p);
    for(int i=1;i<=n-cnt;i++){
        printf("0");
    }
    printf("\n");
}
