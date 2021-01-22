#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <map>
using namespace std;

int hash1[1000000];

int main(int argc, char const *argv[]) {
    int n;
    while(~scanf("%d",&n)){
        memset(hash1,0,sizeof(hash1));
        for(int i=0;i<n;i++){
            int tmp;
            scanf("%d",&tmp);
            hash1[tmp]++;
        }
        int max=0,flag;
        for(int i=0;i<1000000;i++){
            if(hash1[i]>max){
                max=hash1[i];
                flag=i;
            }
        }
        printf("%d\n",flag);
    }
    return 0;
}
