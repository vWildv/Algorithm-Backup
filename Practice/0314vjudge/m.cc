#include <cstdio>
#include <string>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

char map[1005][1005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) cin>>map[i][j];
    int maxn=-1,cnt=0,flag=1;
    for(int i=0;i<n;i++){
        if(flag){
            for(int j=0;j<m;j++){
                if(map[i][j]=='L') maxn=max(cnt,maxn),cnt=0;
                else if(map[i][j]=='.') cnt++; 
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                if(map[i][j]=='L') maxn=max(cnt,maxn),cnt=0;
                else if(map[i][j]=='.') cnt++;
            }
        }
        flag=!flag;
        //printf("--%d\n",flag);
    }
    printf("%d\n",max(maxn,cnt));
}