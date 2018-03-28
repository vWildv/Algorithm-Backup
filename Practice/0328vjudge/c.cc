#include <bits/stdc++.h>
using namespace std;

stack<int> t;

int main(){
    int n;
    scanf("%d",&n);
    int cnt=0,ans=0;
    n*=2;
    while(n--){
        char s[10];
        scanf("%s",s);
        if(s[0]=='a'){
            int tmp;
            scanf("%d",&tmp);
            t.push(tmp);
        }
        else{
            cnt++;
            if(t.empty()) continue;
            int topt=t.top();
            if(topt==cnt) t.pop();
            else{
                ans++;
                while(!t.empty()) t.pop();
            }
        }
    }
    printf("%d\n",ans);
}