#include<stdio.h>
char z[2005][2005];
int main(){
    int n,m,k;
    while(~scanf("%d%d%d",&n,&m,&k)){
        for(int i=0;i<n;i++)scanf("%s",z[i]);
        int sum=0;
        for(int i=0;i<n;i++){
            int r=0;
            for(int j=0;j<m;j++){
                if(z[i][j]=='.')r++;
                else{
                    if(r>=k)sum+=(r-k+1);
                    r=0;
                }
            }
            if(r>=k)sum+=r-k+1;
        }
        if(k==1){printf("%d\n",sum);continue;}
        for(int i=0;i<m;i++){
            int r=0;
            for(int j=0;j<n;j++){
                if(z[j][i]=='.')r++;
                else{
                    if(r>=k)sum+=r-k+1;
                    r=0;
                }
            }
            if(r>=k)sum+=r-k+1;
        }
        printf("%d\n",sum);
    }
    return 0;
}
