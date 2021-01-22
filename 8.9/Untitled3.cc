#include<bits/stdc++.h>
using namespace std;

int n,m,cnt[100005][3];
char s[100005];

int main() {
    scanf("%s",s+1);
    n=strlen(s+1);
    cnt[0][0]=0;
    cnt[0][1]=0;
    cnt[0][2]=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<3;j++){
            cnt[i][j] = cnt[i-1][j];
        }
        cnt[i][s[i]-'x']++;
    }
    scanf("%d",&m);
    while(m--){
        int l, r;
        scanf("%d%d",&l,&r);
        int x=cnt[r][0]-cnt[l-1][0];
        int y=cnt[r][1]-cnt[l-1][1];
        int z=cnt[r][2]-cnt[l-1][2];
        if(r-l+1>=3&& max(x,max(y,z))-min(x,min(y,z))>1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
