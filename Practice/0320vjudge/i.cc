#include <queue>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    priority_queue<int,vector<int>,greater<int> >q;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int tmp;
        scanf("%d",&tmp);
        q.push(tmp);
    }
    long long ans=0;
    while(q.size()>1){
        int a=q.top();
        q.pop();
        int b=a+q.top();
        q.pop();
        ans+=b;
        q.push(b);
    }
    printf("%lld\n",ans);
}