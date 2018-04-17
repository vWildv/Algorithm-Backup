#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m;
        int x,y;
        scanf("%d%d",&n,&m);
        vector<int> s[n+5];
        while(m--){
            int op;
            scanf("%d",&op);
            if(op==1){
                scanf("%d%d",&x,&y);
                //s[x].insert(s[x].begin(),y);
                s[x].push_back(y);
            }
            else if(op==2){
                scanf("%d",&x);
                if(s[x].size()==0) printf("EMPTY\n");
                else{
                    std::vector<int>::iterator it=s[x].end()-1;
                    printf("%d\n",*it);
                    s[x].erase(it);
                }
            }
            else if(op==3){
                scanf("%d%d",&x,&y);
                if(s[y].size()>0&&x!=y){
                    int tmp=s[y].size();
                    std::vector<int>::iterator it=s[y].begin();
                    s[x].push_back(*it);
                    //printf("--%d %d\n",x,y);
                    for(int i=1;i<tmp;i++){
                        //printf("-%d\n",a[i]);
                        //s[x].insert(s[x].begin(),s[y][i]);
                        //s[y].erase(s[y].begin()+i);
                        s[x].push_back(s[y][i]);
                        s[y].erase(s[y].begin()+i);
                    }
                    s[y].erase(it);
                }
            }
        }
    }
}