#include<stdio.h>
#include<string.h>  
#include<algorithm>
using namespace std;

char a[200];
int main()
{
    while(~scanf("%s",a))
    {
        if(strstr(a,"bkpstor"))
        {
            printf("Warning\n");
        }
        else printf("Safe\n");
    }
}