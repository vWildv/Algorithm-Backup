#include <bits/stdc++.h>
#define N 505
using namespace std;

int n,m,a,b;
int val[N][N];
int f[N][N][9][9];

void prework(){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(i==0 and j==0) continue;
            for(int k=1;k<=m-(1<<i)+1;k++){
                for(int p=1;p<=n-(1<<j)+1;p++){
                    if(i==0)
                        f[k][p][i][j]=max(f[k][p][i][j-1],f[k][p+(1<<j-1)][i][j-1]);
                    else
                        f[k][p][i][j]=max(f[k][p][i-1][j],f[k+(1<<i-1)][p][i-1][j]);
                }
            }
        }
    }
}

int query(int r1,int c1,int r2,int c2){
    int k1=log2(r2-r1+1);
    int k2=log2(c2-c1+1);
    return max(f[r1][c1][k1][k2],max(f[r2-(1<<k1)+1][c1][k1][k2],max(f[r1][c2-(1<<k2)+1][k1][k2],f[r2-(1<<k1)+1][c2-(1<<k2)+1][k1][k2])));
}

int res[N][N];

signed main(){
    scanf("%d%d%d%d",&m,&n,&a,&b);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)
            scanf("%d",&val[i][j]),f[i][j][0][0]=val[i][j];
    }
    prework();
    int r=0,l=0;
    for(int i=1;i+a<=m+1;i++){
        r++;
        l=0;
        for(int j=1;j+b<=n+1;j++){
            l++;
            res[r][l]=query(i,j,i+a-1,j+b-1);
        }
    }
    for(int i=1;i<=m-a+1;i++){
        for(int j=1;j<=n-b+1;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}
