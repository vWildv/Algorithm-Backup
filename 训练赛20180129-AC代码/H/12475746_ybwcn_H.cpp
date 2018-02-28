#include<stdio.h>
#include<algorithm>
using namespace std;
struct dian{
    int x,y;
    dian(){}
    dian(int a,int b){x=a;y=b;}
};
dian d[200005];
bool bi1(dian a,dian b){if(a.x==b.x)return a.y<b.y;return a.x<b.x;}
bool bi2(dian a,dian b){if(a.y==b.y)return a.x<b.x;return a.y<b.y;}
int main(){
    int n;
    while(~scanf("%d",&n)){
        for(int i=0;i<n;i++){
            scanf("%d%d",&d[i].x,&d[i].y);
        }
        long long int jie=0;long long int chong=1;
        sort(d,d+n,bi1);
        for(int i=1;i<n;i++){
            if(d[i].x==d[i-1].x)chong++;
            else{
                if(chong!=1)jie+=chong*(chong-1)/2;
                chong=1;
            }
            if(i==n-1){
                if(chong!=1)jie+=chong*(chong-1)/2;
                chong=1;
            }
        }
        sort(d,d+n,bi2);
        long long int jian=1;
        for(int i=1;i<n;i++){
            if(d[i].y==d[i-1].y){
                chong++;
                if(d[i].x==d[i-1].x)jian++;
                else {if(jian!=1)jie-=jian*(jian-1)/2;jian=1;}
            }
            else{
                if(chong!=1)jie+=chong*(chong-1)/2;
                if(jian!=1)jie-=jian*(jian-1)/2;
                chong=1;jian=1;
            }
            if(i==n-1){
                if(chong!=1)jie+=chong*(chong-1)/2;
                if(jian!=1)jie-=jian*(jian-1)/2;
                chong=1;jian=1;
            }
        }
        printf("%lld\n",jie);
    }
    return 0;
}
