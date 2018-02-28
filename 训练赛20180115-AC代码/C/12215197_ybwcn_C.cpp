#include<stdio.h>
#include<string.h>
char ru[105];
int main(){
    while(gets(ru)){
        int k=strlen(ru);
        int pan=0;
        for(int i=0;i<k-6;i++){
            if(ru[i]=='b'){
                if(ru[i+1]=='k'&&ru[i+6]=='r'&&ru[i+5]=='o'&&ru[i+4]=='t'&&ru[i+3]=='s'&&ru[i+2]=='p'){printf("Warning\n");pan=1;}
            }
            if(pan==1)break;
        }
        if(pan==0)printf("Safe\n");
    }
    return 0;
}
