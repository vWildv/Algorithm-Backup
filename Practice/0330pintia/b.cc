#include <bits/stdc++.h>
using namespace std;

string s;
char a[1005][1005];

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    getline(cin,s);
    int cnt=-1;
    int len=s.length();
    memset(a,0,sizeof(a));
    if(n==0) return 0;
    for(int i=(len+n-1)/n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(cnt+1<len){
                cnt++;
                a[j][i]=s[cnt];
            }
            else a[j][i]=' ';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(len+n-1)/n;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }
}