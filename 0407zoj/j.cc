#include <cstdio>  
#include <iostream>  
#include <cstring>  
using namespace std;  
struct node  
{  
    int x;  
    char k;//A栈还是B栈  
}a[233333];  
int b[20000];  
int main()  
{  
    char s[10];  
    int n;  
    int t=1;  
    int i;  
    while(~scanf("%d",&n)&&n)  
    {  
        int top=0;  
        int merx=-1;  
        char merz;  
        int ans=0;  
        while(n--)  
        {  
            scanf("%s",s);  
            if(!strcmp(s,"push"))  
            {  
                int d;  
                scanf("%s",s);  
                scanf("%d",&d);  
                a[top].x=d;  
                a[top++].k=s[0];  
            }  
            else if(!strcmp(s,"pop"))  
            {  
                char x,q;  
                scanf("%c%c",&q,&x);  
                for(i=top-1;i>=0;i--)  
                {  
                    if(i>merx)  
                    {  
                        if(a[i].k==x)  
                        {  
                            a[i].k=0;  
                            b[ans++]=a[i].x;  
                            break;  
                        }  
                    }  
                    else  
                    {  
                        if(merz==x)  
                        {  
                            if(a[i].k!=0)  
                            {  
                                a[i].k=0;  
                                b[ans++]=a[i].x;  
                                break;  
                            }  
                        }  
                    }  
                }  
            }  
            if(!strcmp(s,"merge"))  
            {  
                char q,x,y,r;  
                scanf("%c%c%c%c",&q,&x,&r,&y);  
                merx=top-1;  
                merz=x;  
            }  
        }  
        printf("Case #%d:\n", t++);  
        for(i=0; i<ans; i++)printf("%d\n", b[i]);  
    }  
    return 0;  
} 