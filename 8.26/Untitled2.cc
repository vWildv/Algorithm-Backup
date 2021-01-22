#include <bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;
char s[2000005];
int mp[15][15];

int check(int x,int y){
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++) mp[i][j]=inf;
        mp[i][(i+x)%10]=1;
        mp[i][(i+y)%10]=1;
    }
    for(int k=0;k<=9;k++){
        for(int j=0;j<=9;j++){
            for(int i=0;i<=9;i++){
                mp[i][j]=min(mp[i][k]+mp[k][j],mp[i][j]);
            }
        }
    }
    int cnt=0;
    for(int i=0;i<strlen(s)-1;i++){
        //printf("\n-- %d %d %d\n",s[i]-'0',s[i+1]-'0',mp[s[i]-'0'][s[i+1]-'0']);
        //getchar();
        if(mp[s[i]-'0'][s[i+1]-'0']==inf) return -1;
        else cnt+=mp[s[i]-'0'][s[i+1]-'0']-1;
    }
    return cnt;
}

int main(){
    scanf("%s",s);
    for(int i=0;i<=9;i++){
        for(int j=0;j<=9;j++){
            printf("%d ",check(i,j));
        }
        printf("\n");
    }
}
