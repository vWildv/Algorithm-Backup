#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

char s[100005];

int main(){
    scanf("%s",s);
    int cnt=1;
    for(int i=0;i<strlen(s);i++){
        if(s[i+1]==s[i]) cnt++;
        else{
            printf("%c%d",s[i],cnt);
            cnt=1;
        }
    }
}