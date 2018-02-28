#include <stdio.h>  
#include <string.h>  
#include <algorithm>  
using namespace std;  
  
__int64 a[50],len;  
const __int64 inf = 2147483648+10;  
  
int main()  
{  
    int i,j;  
    __int64 n;  
    a[1] = 1;  
    a[2] = 1;  
    for(i = 3; i<=1000000; i++)  
    {  
        a[i] = a[i-1]+a[i-2];  
        if(a[i]>=inf)  
            break;  
    }  
    len = i;  
    while(~scanf("%I64d",&n),n)  
    {  
        int flag = 0;  
        for(i = 1; i<len; i++)  
        {  
            if(a[i] == n)  
            {  
                flag = 1;  
                break;  
            }  
            if(a[i]>n)  
                break;  
        }  
        if(flag)  
            printf("Second win\n");  
        else  
            printf("First win\n");  
    }  
  
    return 0;  
}  
