#include <bits/stdc++.h>
using namespace std;

int vis[100005];

int main(){
    int sum,limit;
    scanf("%d%d",&sum,&limit);
    int cnt=0; int pos=0;
    for(int i=1;i<=limit;i++){
        cnt+=i&(-i);
        pos=i;
        if(cnt>sum) break;
    }
    if(cnt<sum){
        printf("-1\n");
        return 0;
    }
    cnt=cnt-sum;
    int base=1;
    while(cnt){
        int tmp=cnt%2;
        cnt/=2;
        vis[base*tmp]=1;
        base<<=1;
    }
    int res=0;
    for(int i=1;i<=pos;i++){
        if(vis[i]==0) res++;
    }
    printf("%d\n",res);
    for(int i=1;i<=pos;i++){
        if(vis[i]==0) printf("%d ",i);
    }
}
