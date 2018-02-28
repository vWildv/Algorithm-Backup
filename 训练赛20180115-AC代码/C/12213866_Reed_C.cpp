#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;

char ss[105];
int main()
{
    while(gets(ss))
    {
        int sign=0;
        int n=strlen(ss);
        for(int i=0;i<n;i++)
        {
            if(ss[i]=='b')
                if(ss[i+1]=='k')
                    if(ss[i+2]=='p')
                        if(ss[i+3]=='s')
                            if(ss[i+4]=='t')
                                if(ss[i+5]=='o')
                                    if(ss[i+6]=='r')
                                        sign=1;
        }
        if(sign==0)
            printf("Safe\n");
        else
            printf("Warning\n");
    }
    return 0;
}
