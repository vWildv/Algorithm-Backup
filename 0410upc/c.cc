#include <bits/stdc++.h>
using namespace std;

struct node{
    int x,id;
};

bool cmp(node a,node b){
    if(a.x==b.x) return a.id<b.id;
    return a.x<b.x;
}

vector<node> a;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        node tmp;
        scanf("%d",&tmp.x);
        tmp.id=i;
        a.push_back(tmp);
    }
    sort(a.begin(),a.end(),cmp);
    int cnt=0;
    for(int i=0;i<n;i+=2){
        if((a[i].id+i)%2) cnt++;
    }
    printf("%d\n",cnt);
}