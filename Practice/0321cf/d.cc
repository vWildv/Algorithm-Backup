#include <vector>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

char a[1005],b[1005];
vector<int> pos[1005];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    scanf("%s",a+1);
    scanf("%s",b+1);
    int mini=0x3f3f3f3f;
    for(int i=1;i<=m-n+1;i++){
        for(int j=1;j<=n;j++){
            if(a[j]!=b[i+j-1]) pos[i].push_back(j);
        }
        mini=min(mini,(int)pos[i].size());
    }
    printf("%d\n",mini);
    for(int i=1;i<=m-n+1;i++){
        if(pos[i].size()==mini){
            for(int j=0;j<pos[i].size();j++) printf("%d ",pos[i][j]);
            printf("\n");
            return 0;
        }
    }
}