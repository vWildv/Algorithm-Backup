#include <bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;
int mp[105][105];
int a[1000005];

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        getchar();
        for(int j=1;j<=n;j++){
            char tmp;
            scanf("%c",&tmp);
            mp[i][j]=tmp-'0';
            if(mp[i][j]==0&&i!=j) mp[i][j]=inf;
        }
    }
    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    for(int k=1;k<=n;k++){
        for(int j=1;j<=n;j++){
            for(int i=1;i<=n;i++){
                mp[i][j]=min(mp[i][k]+mp[k][j],mp[i][j]);
            }
        }
    }
    for(int i=1;i<m-1;){
        for(int j=i+2;;){
            if(j>m){
                i=j-1;
                break;
            }
            if(mp[a[i]][a[j]]<j-i){
                i=j-1;
                break;
            }
            else{
                a[j-1]=-1;
                j++;
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=m;i++){
        if(a[i]!=-1) cnt++;
    }
    printf("%d\n",cnt);
    for(int i=1;i<=m;i++){
        if(a[i]!=-1) printf("%d ",a[i]);
    }
    printf("\n");
}
