#include <cstdio>
#include <queue>
#include <vector>
#include <cstring>
#include <iostream>
#include <algorithm>
#define li long long
using namespace std;

int len,m,ne;
vector<int> b;

struct node{
    int v,id;
}a[1005];

queue<node> q;

bool cmp(node a,node b){
    if(a.v==b.v) return a.id<b.id;
    return a.v<b.v;
}

void bfs(){
    while(!q.empty()){
        if(ne==0) break;
        ne--;
        node tmps=q.front();
        b.push_back(tmps.v);
        q.pop();
        for(int i=0;i<len;i++){
            if((len-a[i].id)>=ne&&a[i].id>tmps.id){
                q.push(a[i]);
                a[i].id=0x3f3f3f3f;
                break;
            }
        }
    }
}

int main(){
    string tmp;
    while(cin>>tmp>>m){
        len=tmp.length();
        for(int i=0;i<len;i++){
            a[i].v=tmp[i]-'0';
            a[i].id=i;
        }
        sort(a,a+len,cmp);
        ne=len-m;
        while(!q.empty()) q.pop();
        b.clear();
        for(int i=0;i<len;i++){
            if((len-a[i].id)>=ne){
                q.push(a[i]);
                a[i].id=0x3f3f3f3f;
                break;
            }
        }
        bfs();
        int mark = 1;
        for(int i=0;i<b.size();i++){
            if(mark){
                if(b[i]!=0){
                    printf("%d", b[i]);
                    mark=0;
                }
            }
            else printf("%d", b[i]);
        }
        if(mark) printf("0");
        printf("\n");
    }
}
