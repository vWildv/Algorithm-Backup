#include<bits/stdc++.h>
#define LL long long
using namespace std;

struct Edge{
    int pre;
    int next;
}edges[10050];
int head[105];
int sumEdge;

void AddEdge(int u,int v)
{
    edges[sumEdge].pre=v;
    edges[sumEdge].next=head[u];
    head[u]=sumEdge++;
}

bool check(int sc,int k)
{
    for(int i=head[sc];i!=-1;i=edges[i].next){
        if(edges[i].pre==k) return false;
        else if(check(edges[i].pre,k)==false) return false;
    }
    return true;
}

int main()
{
    int N,M,x,y;
    while(cin>>N>>M){
        if(N==0) break;
        memset(edges,0,sizeof(edges));
        memset(head,-1,sizeof(head));
        sumEdge=0;
        int flag=1;
        for(int i=1;i<=M;i++){
            cin>>x>>y;
            if(!flag) continue;
            if(check(y,x))
                AddEdge(x,y);
            else
                flag=0;
        }
        if(flag) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}

