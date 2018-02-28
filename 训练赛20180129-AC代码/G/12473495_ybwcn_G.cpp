#include<stdio.h>
#include<algorithm>
using namespace std;
int hua[1005];
int main(){
    int a;
    while(~scanf("%d",&a)){
        for(int i=0;i<a;i++)scanf("%d",&hua[i]);
        sort(hua,hua+a);
        int ru=0;int jie=0;
        for(int i=1;i<a;i++){
            if(hua[i]>hua[i-1])jie++;
            else{hua[ru]=hua[i];ru++;}
        }
        while(ru!=0){
            a=ru;ru=0;
            sort(hua,hua+a);
            for(int i=1;i<a;i++){
                if(hua[i]>hua[i-1])jie++;
                else{hua[ru]=hua[i];ru++;}
            }
        }
        printf("%d\n",jie);
    }
    return 0;
}
