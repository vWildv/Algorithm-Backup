#include<stdio.h>
int d[100001],s[100001];
int main(){
    int n,i,j;
    while(~scanf("%d",&n)){
        for(i=0;i<n;i++)
            scanf("%d",&d[i]);
        int k=0;
        s[0]=d[0];
        for(i=1;i<n;i++){
            int e=0;
            for(j=0;j<=k;j++){
                if(s[j]>=d[i]){
                    s[j]=d[i];
                    e=1;
                    break;
                }
            }
            if(e!=1){
                k++;
                s[k]=d[i];
            }
        }
        printf("%d\n",k+1);
    }
    return 0;
}
