#include <stdio.h>
#include <cstring>

int main()
{
    char str[105];
    while(~scanf("%s", &str)) {
        int len = strlen(str);
        bool ju = false;
        for(int i = 0; i < len; i ++) {
            if(ju) break;
            if(str[i] == 'b' && str[i+1] == 'k' && str[i+2] == 'p' && str[i+3] == 's' && str[i+4] == 't' && str[i+5] == 'o' && str[i+6] == 'r') {
                printf("Warning\n");
                ju = true;
            }
        }
        if(!ju) printf("Safe\n");
    }
}
