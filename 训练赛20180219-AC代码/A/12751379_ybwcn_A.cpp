#include<stdio.h>
#include<string.h>
int fen[20];
char shi[10];
char jie[10];
int main(){
    int a,ti,jiao;
    while(~scanf("%d",&a)){
        while(a--){
            memset(fen,0,sizeof(fen));
            scanf("%d%d",&ti,&jiao);
            int cheng=0,zuo=0;
            while(jiao--){
                scanf("%d %s %s",&ti,shi,jie);
                int x=ti-1000;
                if(strlen(jie)==2&&jie[0]=='A'&&jie[1]=='C'&&fen[x]!=-1){
                    cheng=cheng+(shi[1]-'0')*60+(shi[3]-'0')*10+(shi[4]-'0')+fen[x];
                    fen[x]=-1;
                    zuo++;
                }
                else if(fen[x]!=-1){
                    fen[x]+=20;
                }
            }
            printf("%d %d\n",zuo,cheng);
        }
    }
    return 0;
}
