#include <bits/stdc++.h>
using namespace std;

int f[100005];

int main(){
    int n;
    while(~scanf("%d",&n))
    //f[0]=7;f[1]=11;
    //for(int i=2;i<=20;i++){
    //    f[i]=f[i-1]+f[i-2];
        //printf("%d %d\n",f[i],f[i]%3);
    //}
    printf("%s\n",(n-2)%4==0?"yes":"no");
}
