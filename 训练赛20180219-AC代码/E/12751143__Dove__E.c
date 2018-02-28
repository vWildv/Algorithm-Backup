#include<stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        c=a-b;
        if(a==0&b==0)
        {
            printf("NO\n");
        }
        else if(c==1||c==-1||c==0)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
