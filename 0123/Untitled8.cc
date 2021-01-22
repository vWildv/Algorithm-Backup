#include <stdio.h>
using namespace std;

int main(){
    int p,e,iq,d;
    int cas=0;

    int x,y,z;
    int i=0;
    while((33*28*i)%23!=1) i++;
    x=33*28*i; i=0;

    while((23*33*i)%28!=1) i++;
    y=33*23*i; i=0;

    while((23*28*i)%33!=1) i++;
    z=23*28*i; i=0;

    while(~scanf("%d%d%d%d",&p,&e,&iq,&d)){
        if(p==-1&&e==-1&&iq==-1&&d==-1){
            break;
        }
        int res=(x*p+y*e+z*iq)%21252;
        printf("Case %d: the next triple peak occurs in %d days.\n",++cas,(res-d+21252)%21252?(res-d+21252)%21252:21252);
    }
}
