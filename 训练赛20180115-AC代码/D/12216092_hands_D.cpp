#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int f1=1,f2=1,temp;
        while(f2<n)
        {
            temp=f1;
            f1=f2;
            f2=temp+f2;
        }
        if(n==f2)
            printf("Second win\n");
        else
            printf("First win\n");
        scanf("%d",&n);
    }
}