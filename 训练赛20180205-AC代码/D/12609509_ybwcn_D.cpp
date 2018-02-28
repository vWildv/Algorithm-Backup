#include<stdio.h>
#include<string.h>
char x[200005];
int n[200005];
int next[200005];
void fuzhi(char *x,int next[]){
     next[0]=-1;
    int k=-1,j=0;
    while(x[j]!='\0'){
        k++;j++;
        if(x[k]==x[j]){next[j]=next[k];}
        else{next[j]=k;k=-1;}
    }
}
int main(){
    int zu,ge;
    while(~scanf("%d",&zu)){
        while(zu--){
            scanf("%d",&ge);
            getchar();
            int jie=ge;
            scanf("%s",x);
            fuzhi(x,next);
            n[0]=0;int k=0;
            for(int i=1;i<=ge;i++){
                if(x[i]==x[k]){n[i]=(n[k]+1)%10007;k++;}
                else{n[i]=0;if(next[k]!=-1){i--;k=next[k];}else k=0;}
            }
            for(int i=0;i<=ge;i++)jie=(jie+n[i])%10007;
            printf("%d\n",jie);
        }
    }
    return 0;
}
