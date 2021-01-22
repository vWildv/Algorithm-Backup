#include <bits/stdc++.h>
using namespace std;

const int N=100005;

int a[N];
stack<int> s;

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        while(!s.empty()){
            int t=s.top();
            if(a[i]>t){
                ans=max(ans,a[i]^t);
                int tmp=s.top();
                s.pop();
                if(!s.empty()) ans=max(ans,tmp^s.top());
            }
            else break;
        }
        s.push(a[i]);
    }
    while(s.size()>1){
        int t=s.top();
        s.pop();
        ans=max(ans,t^s.top());
    }
    printf("%d\n",ans);
}
