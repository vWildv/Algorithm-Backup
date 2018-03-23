#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char s[10000005];

int main(){
    scanf("%s",s);
    int len=strlen(s);
    if(len%2){
        printf("NO\n");
        return 0;
    }
    int ans=0,flag=0;
    for(int i=0;i<len/2;i++){
        if(s[i]==s[len/2+i]) ans++;
        if(ans==len/2){
            flag=1;
            break;
        } 
    }
    printf("%s\n",flag?"YES":"NO");
}