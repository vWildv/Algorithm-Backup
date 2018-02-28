#include<stdio.h>
#include<string.h>
int main()
{
    int f[1000];
    int n;
    f[0] = 1;
    f[1] = 1;
    for(int i = 2;i < 60;i++)
        f[i] = f[i-1]+f[i-2];
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        bool flag = false;
        for(int i = 0;i <1000;i++)
            if(n == f[i])
            {
                flag = true;
                break;
            }
        if(flag)printf("Second win\n");
        else printf("First win\n");
    }
    return 0;
}
