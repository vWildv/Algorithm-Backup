#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
using namespace std;
queue<int>meng;
struct xing{
    int a;
    int b;
    xing(){}
    xing(int c,int d){a=c,b=d;}
};
xing du[200005];
int ge[50005];
bool chong[50005];
int wei[50005];
bool cmp(xing x,xing y){
    if(x.a==y.a)return x.b<y.b;
    else return x.a<y.a;
}
int main(){
    int n,m;
    int qian,hou;
    while(~scanf("%d%d",&n,&m)){
        memset(ge,0,sizeof(ge));
        memset(chong,0,sizeof(chong));
        int bing=1;chong[0]=true;
        for(int i=0;i<m;i++){
            scanf("%d%d",&qian,&hou);
            if(qian<hou){int o=hou;hou=qian;qian=o;}
            du[i]=xing(qian,hou);
            du[m+i]=xing(hou,qian);
            ge[qian]++;
            ge[hou]++;
            if(qian==0&&chong[hou]==false){meng.push(hou);bing++;chong[hou]=true;}
            if(hou==0&&chong[qian]==false){meng.push(qian);bing++;chong[qian]=true;}
        }
        sort(du,du+2*m,cmp);
        wei[0]=0;
        for(int i=1;i<=n;i++){
            wei[i]=wei[i-1]+ge[i-1];
        }
        int s;
        int chu;
        while(!meng.empty()){
            chu=meng.front();
            meng.pop();
            for(int i=wei[chu];i<wei[chu]+ge[chu];i++){
                if(chong[du[i].b]==false){meng.push(du[i].b);chong[du[i].b]=true;bing++;}
            }
        }
        printf("%d\n",bing);
    }
    return 0;
}
