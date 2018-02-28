#include<cstdio>
#include<cstring>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    char str[105];
    while(gets(str))
    {
        int len=strlen(str);
        if(strstr(str,"bkpstor")==NULL)
        {
            printf("Safe\n");
        }
        else
        {
            printf("Warning\n");
        }
    }
    return 0;
}
