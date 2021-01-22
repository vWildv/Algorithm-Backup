#include <bits/stdc++.h>
using namespace std;

int n,m;
struct node{
    int t,r;
}p[200005];
int a[200005];
stack<int> s;
int r[200005];
vector<int> o;

bool cmp(int x,int y){
    return x>y;
}

int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%d%d",&p[i].t,&p[i].r);
        while(!s.empty()){
            int x=s.top();
            if(p[x].r<p[i].r){
                r[x]=i;
                s.pop();
            }
            else break;
        }
        s.push(i);
    }
    while(!s.empty()){
        int x=s.top();
        r[x]=m;
        s.pop();
    }
    for(int i=1;i<=m;i++){
        if(r[i]==m){
            o.push_back(i);
        }
    }

    for(int i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
}

