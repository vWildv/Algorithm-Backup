#include <bits/stdc++.h>
using namespace std;

int main(){
    int s,w,c,k,m;
    while(~scanf("%d%d%d%d%d",&s,&w,&c,&k,&m)){
        priority_queue<int,vector<int>,less<int> > q;
        int ans=(10000+c-1)/c;
        k=min(ans,k);
        for(int i=1;i<=k;i++){
            q.push(m*i+s);
        }
        int tmp=0;int cnt=0; int res=0;
        while(!q.empty()){
            int x=q.top();
            q.pop();
            if(x<tmp) x=tmp;
            tmp=x+w;
            cnt++;
            if(cnt==ans){
                res=x+w+s;
                break;
            }
            q.push(x+w+2*s);
        }
        printf("%d\n",res);
    }
}
