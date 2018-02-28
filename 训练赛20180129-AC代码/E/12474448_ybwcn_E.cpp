#include<stdio.h>
#include<algorithm>
using namespace std;
int you[100005];
int ru[100005];
int main(){
    int n,qian;int a,b;
    while(~scanf("%d%d",&n,&qian)){
        for(int i=0;i<n;i++)scanf("%d",&you[i]);
        sort(you,you+n);
        int j=1,i=0;
        int chu=0;
        while(qian>=j){
            if(i<n&&j==you[i])i++;
            else{
                qian-=j;
                ru[chu]=j;chu++;
            }
            j++;
        }
        printf("%d\n",chu);
        for(int i=0;i<chu;i++){
            if(i==0)printf("%d",ru[i]);
            else printf(" %d",ru[i]);
        }
        puts("");
    }
    return 0;
}
