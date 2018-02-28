#include<stdio.h>
#include<queue>
#include<string.h>
using namespace std;
struct dian{
    int x,y,bu;
    dian(int x1,int y1,int bu1){
        x=x1;y=y1;bu=bu1;
    }
    dian(){}
    bool operator < (const dian &oth)const{
        return bu>oth.bu;
    }
};
int max1(int a,int b){
    if(a>b)return b;
    else return a;
}
priority_queue<dian>mi;
char tu[205][205];
int zhi[205][205];
bool zou[205][205];
int jie[205][205];
int main(){
    int a,y,bu,bu1,x;
    dian chu,ru;
    while(~scanf("%d",&a)){
        int chang,gao;
        while(a--){
            memset(zou,0,sizeof(zou));
            memset(jie,0,sizeof(jie));
            scanf("%d%d",&chang,&gao);
            for(int i=0;i<chang;i++){
                getchar();
                for(int j=0;j<gao;j++){
                    scanf("%c",&tu[i][j]);
                    if(tu[i][j]=='.')zhi[i][j]=1;
                    else if(tu[i][j]=='#')zou[i][j]=1;
                    else if(tu[i][j]=='Z'){
                        chu=dian(i,j,0);zou[i][j]=1;
                        zhi[i][j]=0;mi.push(chu);
                    }
                    else if(tu[i][j]=='W')zhi[i][j]=1;
                    else zhi[i][j]=tu[i][j]-'0'+1;
                    }
            }
            int guo=-1;
             while(!mi.empty()){
                chu=mi.top();
                mi.pop();
                x=chu.x;y=chu.y;bu=chu.bu;
                if(zou[x][y]==1&&tu[x][y]!='Z')continue;
                if(tu[x][y]=='W'){guo=bu;break;}
                zou[x][y]=1;
               if(x>0&&zou[x-1][y]!=1){
                    if(jie[x-1][y]!=0)jie[x-1][y]=max1(jie[x-1][y],jie[x][y]+zhi[x-1][y]);
                    else jie[x-1][y]=jie[x][y]+zhi[x-1][y];
                    ru=dian(x-1,y,jie[x-1][y]);
                    mi.push(ru);
                }
                if(x<chang-1&&zou[x+1][y]!=1){
                    if(jie[x+1][y]!=0)jie[x+1][y]=max1(jie[x+1][y],jie[x][y]+zhi[x+1][y]);
                    else jie[x+1][y]=jie[x][y]+zhi[x+1][y];
                    ru=dian(x+1,y,jie[x+1][y]);
                    mi.push(ru);
                }
                if(y>0&&zou[x][y-1]!=1){
                    if(jie[x][y-1]!=0)jie[x][y-1]=max1(jie[x][y-1],jie[x][y]+zhi[x][y-1]);
                    else jie[x][y-1]=jie[x][y]+zhi[x][y-1];
                    ru=dian(x,y-1,jie[x][y-1]);
                    mi.push(ru);
                }
                if(y<gao-1&&zou[x][y+1]!=1){
                    if(jie[x][y+1]!=0)jie[x][y+1]=max1(jie[x][y+1],jie[x][y]+zhi[x][y+1]);
                    else jie[x][y+1]=jie[x][y]+zhi[x][y+1];
                    ru=dian(x,y+1,jie[x][y+1]);
                    mi.push(ru);
                }
            }
            if(guo!=-1){printf("%d\n",guo);while(!mi.empty())mi.pop();}
            else printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
