#include<iostream>
#include<stdio.h>
#include<queue>
#include<stack>
#include<string.h>
#include<string>
#include<stdlib.h>
#include<algorithm>
#include<math.h>
using namespace std;
char a[105];
int main(){
    while(~scanf("%s",&a)){

        if(strstr(a,"bkpstor")){
            printf("Warning\n");
        }
        else
            printf("Safe\n");
    }
    return 0;
}
