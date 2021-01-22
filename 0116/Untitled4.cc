#include <bits/stdc++.h>
using namespace std;

map<string,int> a;
int pre[100005];
map<int,map<int,int> > con;
int op[100005];

int Find(int x){
    int root=x;
    while(pre[root]!=root) root=pre[root];
    for(int i=x,j;i!=root;i=j){
        j=pre[i];
        pre[i]=root;
    }
    return root;
}

void Union(int x,int y){
    if(x!=y) pre[x]=y;
}

int main(){
    string tmp;
    int n,m,q;
    scanf("%d%d%d",&n,&m,&q);
    int cnt=0;
    for(int i=1;i<=n;i++){
        cin>>tmp;
        a[tmp]=++cnt;
    }
    for(int i=1;i<=n;i++) pre[i]=i,con[i][i]=1;
    string aa,bb;
    int s;
    while(m--){
        cin>>s>>aa>>bb;
        if(s==1){
            int xx=Find(a[aa]);
            int yy=Find(a[bb]);
            int opxx=Find(op[xx]);
            int opyy=Find(op[yy]);
            if(xx==opyy) printf("NO\n");
            else{
                printf("YES\n");
                Union(xx,yy);
                if(opxx!=0&&opyy!=0){
                    Union(opxx,opyy);
                }
                if(opxx==0) op[xx]=opyy;
                if(opyy==0) op[yy]=opxx;
            }
        }
        else{
            int xx=Find(a[aa]);
            int yy=Find(a[bb]);
            int opxx=Find(op[xx]);
            int opyy=Find(op[yy]);
            if(xx==yy) printf("NO\n");
            else{
                printf("YES\n");
                if(opxx!=0) Union(yy,opxx);
                else op[xx]=yy;
                if(opyy!=0) Union(xx,opyy);
                else op[yy]=xx;
            }
        }
    }
    while(q--){
        cin>>aa>>bb;
        int xx=Find(a[aa]);
        int yy=Find(a[bb]);
        int opxx=Find(op[xx]);
        int opyy=Find(op[yy]);
        //printf("-- %d %d\n",xx,yy);
        if(xx==yy) printf("1\n");
        else if(opxx==yy||opyy==xx) printf("2\n");
        else printf("3\n");
    }
}
