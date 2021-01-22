#include <bits/stdc++.h>
using namespace std;

stack<int> a;

int main(){
    int n;
    scanf("%d",&n);
    int res=0; int cnt=1;
    int flag=0;
    n<<=1;
    while(n--){
        string s;
        cin>>s;
        if(s=="add"){
            int tmp;
            scanf("%d",&tmp);
            a.push(tmp);
        }
        else{
            if(a.empty()){
                cnt++;
                continue;
            }
            if(a.top()==cnt){
                cnt++;
                a.pop();
            }
            else{
                res++;
                cnt++;
                while(!a.empty()) a.pop();
            }
        }
    }
    printf("%d\n",res);
}
