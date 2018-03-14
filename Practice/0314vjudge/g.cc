#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

char tmp[100005];

int main(){
    scanf("%s",tmp);
    int j=0,k=0;
    if(strlen(tmp)%2!=0){
        printf("Nao\n");
        return 0;
    }
    for(int i=0;i<strlen(tmp);i++){
        if(tmp[i]=='A') k++,j++;
        else{
            if(k!=0) k--,j++;
        }
    }
    if(k==0&&j==strlen(tmp)) printf("Sim\n");
    else printf("Nao\n");
}