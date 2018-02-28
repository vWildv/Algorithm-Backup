#include<stdio.h>
int main()
{
    int a;int qian,hou;
    while(~scanf("%d",&a)){
        while(a--){
            scanf("%d%d",&qian,&hou);
            int jie=0;
            int k=qian-hou;
            if(qian%2==1)qian--;
            if(hou%2==1)hou--;
            if(k%2==1)k--;
            for(int i=qian;i>=2;i-=2){
                int s=i;
                while(s%2==0){
                    s/=2;jie++;
                }
            }
            for(int i=hou;i>=2;i-=2){
                int s=i;
                while(s%2==0){
                    s/=2;jie--;
                }
            }
            for(int i=k;i>=2;i-=2){
                int s=i;
                while(s%2==0){
                    s/=2;jie--;
                }
            }
            printf("%d\n",jie);
        }
    }
    return 0;
}
