#include <bits/stdc++.h>
using namespace std;

stack<int> s;

int main(){
    int n;
    scanf("%d",&n);
    getchar();
    int a=1;int res=0;
    for(int i=1;i<=2*n;i++){
        string tmp;
        int x;
        cin>>tmp;
        if(tmp=="add"){
            scanf("%d",&x);
            s.push(x);
        }
        else{
            if(s.empty()){
                a++;
            }
            else{
                int tmp=s.top();
                if(tmp==a){
                    a++;
                    s.pop();
                }
                else{
                    res++;
                    while(!s.empty()){
                        s.pop();
                    }
                    a++;
                }
            }
        }
    }
    printf("%d\n",res);
}
