#include <bits/stdc++.h>
using namespace std;

char a[105],b[105];
int num1[2500],num2[2500];
int sum[2500];
char mp[20]={'0','1','2','3','4','5','6','7','8','9','a',
'b','c','d','e','f','g','h','i','j'};

int main(){
    while(~scanf("%s%s",a,b)){
        int lena=strlen(a);
        int lenb=strlen(b);
        memset(sum,0,sizeof(sum));
        memset(num1,0,sizeof(num1));
        memset(num2,0,sizeof(num2));
        //printf("%s %s",a,b);
        for(int i=lena-1,j=0;i>=0;i--){
            if(a[i]>='0'&&a[i]<='9'){
                num1[j++]=a[i]-'0';
            }
            else if(a[i]>='a'&&a[i]<='j'){
                num1[j++]=a[i]-'a'+10;
            }
            //printf("-- %d\n",num1[j-1]);
        }
        for(int i=lenb-1,j=0;i>=0;i--){
            if(b[i]>='0'&&b[i]<='9'){
                num2[j++]=b[i]-'0';
            }
           else if(b[i]>='a'&&b[i]<='j'){
                num2[j++]=b[i]-'a'+10;
            }
        }
        int pos=0;
        for(int i=0;i<2500;i++){
            sum[i]+=(num1[i]+num2[i]);
            if(sum[i]>=20){
                sum[i]-=20;
                sum[i+1]++;
            }
            if(sum[i]!=0) pos=i;
        }
        for(int i=pos;i>=0;i--){
            //printf("%d ",sum[i]);
            printf("%c",mp[sum[i]]);
        }
        printf("\n");
    }

}

