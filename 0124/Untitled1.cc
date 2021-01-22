#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

int ans[200005];

int main(){
    int n;
    scanf("%d",&n);
    priority_queue <pii,vector<pii>,greater<pii> > q;
    priority_queue <int,vector<int>,less<int> > p;
    for(int i=1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        p.push(tmp);
    }
    for(int i=1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        q.push(make_pair(tmp,i));
    }
    while(!q.empty()){
        pii tmp=q.top();
        //printf("%d \n",tmp.first);
        ans[tmp.second]=p.top();
        //printf("- %d\n",p.top());
        q.pop(); p.pop();
    }
    for(int i=1;i<=n;i++){
        printf("%d ",ans[i]);
    }
}
