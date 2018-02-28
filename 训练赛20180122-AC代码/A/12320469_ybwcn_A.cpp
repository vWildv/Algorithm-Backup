#include<stdio.h>
#include<string.h>
int dui[1005];
int r[1005];
int main(){
    int a;
    int qian,ren,zu,hou;
    while(~scanf("%d",&a)){
        while(a--){
            int ji=1;
            scanf("%d%d",&ren,&zu);
            memset(r,0,sizeof(r));
            memset(dui,0,sizeof(dui));
            int jie=ren;
            while(zu--){
                scanf("%d%d",&qian,&hou);
                if(r[qian]==0&&r[hou]==0){jie--;r[qian]=hou;r[hou]=hou;dui[hou]=-1;ji++;}
                else if(r[qian]==0){jie--;r[qian]=r[hou];}
                else if(r[hou]==0){jie--;r[hou]=r[qian];}
                else{
                    int q=r[qian];int h=r[hou];
                    while(dui[q]!=-1){q=dui[q];}
                    while(dui[qian]!=-1){dui[qian]=q;r[qian]=q;qian=dui[qian];}
                    while(dui[h]!=-1){h=dui[h];}
                    while(dui[hou]!=-1){dui[hou]=h;r[hou]=h;hou=dui[hou];}
                    if(q!=h){dui[q]=h;jie--;}
                }
            }
            printf("%d\n",jie);
        }
    }
    return 0;
}
