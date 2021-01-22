#include <bits/stdc++.h>
using namespace std;

vector<int> g[300005];
int a[300005];

int main(){
    int n;
    scanf("%d",&n);
    int maxn=-0x3f3f3f3f; int pos=0;
    //printf("%d\n",maxn);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]>maxn){
            maxn=a[i];
            pos=i;
        }
    }
    //printf("%d\n",maxn);
    int x,y;
    for(int i=1;i<=n-1;i++){
        scanf("%d%d",&x,&y);
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int cnt=0; int maxncnt=0;
    for(int i=1;i<=n;i++){
        if(a[i]==maxn-1) cnt++;
        if(a[i]==maxn) maxncnt++;
    }
    int ccnt=0;
    for(int i=0;i<g[pos].size();i++){
        if(a[g[pos][i]]==maxn-1) ccnt++;
    }
    if(maxncnt==1){
        if(ccnt==cnt) printf("%d\n",maxn);
        else printf("%d\n",maxn+1);
    }
    else{
        int conmaxn=0; int res=-1;
        for(int i=1;i<=n;i++){
            conmaxn=0;
            //printf("---%d %d\n",i,a[i]);
            if(a[i]==maxn) conmaxn++;
            //
            for(int j=0;j<g[i].size();j++){
                if(a[g[i][j]]==maxn){
                    conmaxn++;
                    //printf("-- %d\n",g[i][j]);
                }
            }
            //if(maxncnt==conmaxn) printf("%d\n",maxn+1);
            res=max(conmaxn,res);
            //printf("- %d\n",res);
        }
        if(maxncnt==res) printf("%d\n",maxn+1);
        else printf("%d\n",maxn+2);
    }
}
