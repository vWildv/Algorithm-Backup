#include<stdio.h>
#include<string>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct ji{
    string a;
    int fen;
    ji(){}
    ji(string x,int f){a=x;fen=f;}
};
vector<ji>lu[10005];
bool bi(ji a,ji b){
    return a.fen>b.fen;
}
int main(){
    int n,a,b,r;string name;
    while(~scanf("%d%d%d",&n,&r)){
        for(int i=1; i<=r; i++)lu[i].clear();
        while(n--){
            cin>>name;scanf("%d%d",&a,&b);
            lu[a].push_back(ji(name,b));
        }
        for(int i=1;i<=r;i++){
            sort(lu[i].begin(),lu[i].end(),bi);
            int chang=lu[i].size();
            if(chang>2&&lu[i][1].fen==lu[i][2].fen)printf("?");
            else cout<<lu[i][0].a<<" "<<lu[i][1].a;
            puts("");
        }
    }
    return 0;
}
