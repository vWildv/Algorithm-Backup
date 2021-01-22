#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char a[15][15];

int main(){
    int cnt=0;
    for(int i=0;i<10;i++) scanf("%s",a[i]);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(a[i][j]=='.'){
                cnt=0;
                for(int k=j-1;k>=0&&a[i][k]=='X';k--) cnt++;
                for(int k=j+1;k<10&&a[i][k]=='X';k++) cnt++;
                if(cnt>=4){
                    printf("YES\n");
                    return 0;
                }
                cnt=0;
                for(int l=i-1;l>=0&&a[l][j]=='X';l--) cnt++;
                for(int l=i+1;l<10&&a[l][j]=='X';l++) cnt++;
                if(cnt>=4){
                    printf("YES\n");
                    return 0;
                }
                cnt=0;
                for(int m=i-1,n=j-1;m>=0&&n>=0&&a[m][n]=='X';m--,n--) cnt++;
                for(int m=i+1,n=j+1;m<10&&n<10&&a[m][n]=='X';m++,n++) cnt++;
                if(cnt>=4){
                    printf("YES\n");
                    return 0;
                }
                cnt=0;
                for(int m=i-1,n=j+1;m>=0&&n<10&&a[m][n]=='X';m--,n++) cnt++;
                for(int m=i+1,n=j-1;m<10&&n>=0&&a[m][n]=='X';m++,n--) cnt++;
                if(cnt>=4){
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
}