#include<cstdio>
#include<cstring>
using namespace std;
int main(){
    char str[110];
    while(gets(str)){
        int flag=0;
        for(int i=0;i<=99;i++){
            if(str[i]=='b'){
                if(str[i+1]=='k'){
                    if(str[i+2]=='p'){
                        if(str[i+3]=='s'){
                            if(str[i+4]=='t'){
                                if(str[i+5]=='o'){
                                    if(str[i+6]=='r') flag=1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if(flag==1) printf("Warning\n");
        else printf("Safe\n");
        memset(str,0,sizeof(str));
    }
    return 0;
}
