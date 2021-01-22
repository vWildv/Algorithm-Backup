#include <bits/stdc++.h>
using namespace std;

char a[10],b[10];
char ans[10][100005];

int main(){
    int n;
    scanf("%d",&n);
    n-=1;
    int m=n;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='?'){
            if(i==0) a[i]='1';
            else a[i]='0';
        }
    }
    for(int i=0;i<strlen(a);i++){
        ans[i][0]=a[i];
    }
    int flag=1; int cnt=1; int tmpb=0;
    while(n--){
        for(int i=0;i<tmpb&&cnt!=1;i++){
            a[i]=b[i];
        }
        scanf("%s",b);
        if(!flag) continue;
        int lena=strlen(a);
        int lenb=strlen(b);
        if(lena>lenb){
            flag=0;
            //printf("%s\n%s\n",a,b);
            continue;
        }
        if(lena==lenb){
            int sign=0; int c=0;
            for(int i=lena-1;i>=0;i--){
                //printf("-- %c %c \n",b[i],a[i]);
                if(b[i]>a[i]&&b[i]!='?') sign=1;
                if(b[i]=='?'){
                    if(sign==0){
                        //b[i]=a[i]+1;
                        //printf("-- %c",b[i]);
                        if(a[i]+1>'9') b[i]=a[i],c++;
                        else b[i]=a[i]+1,sign=1,c=0;
                    }
                    else{
                        b[i]=a[i];
                    }
                }
            }
            if(c>0) flag=0;
            for(int i=0;i<lena;i++){
                if(b[i]>a[i]){
                    //printf("%c %c\n",b[i],a[i]);
                    //flag=1;
                    break;
                }
                else if(b[i]<a[i]){
                    flag=0;
                    break;
                }
            }
        }
        else{
            for(int i=0;i<lenb;i++){
                if(b[i]=='?'){
                    if(i==0) b[i]='1';
                    else b[i]='0';
                }
            }
        }
        for(int i=0;i<lenb;i++){
            ans[i][cnt]=b[i];
            //printf("%c",b[i]);
        }
        cnt++;
        //printf("\n");
        tmpb=lenb;
    }
    if(flag){
        printf("YES\n");
        for(int i=0;i<m+1;i++){
            for(int j=0;ans[j][i];j++){
                printf("%c",ans[j][i]);
            }
            printf("\n");
        }
    }
    else{
        printf("NO\n");
    }

}
