#include<stdio.h>
#include<stdlib.h>
int fab[46];
int main()
{
    int n, i;
    fab[0]=1;fab[1]=1;
    for(i=2; i<=45; i++)
        fab[i]=fab[i-1]+fab[i-2];
    while(scanf("%d", &n)!=EOF&&n)
    {
        for(i=0; i<46; i++)
            if(n==fab[i])
                break;
        if(i==46)
            printf("First win\n");
        else
            printf("Second win\n");
    }
    return 0;
}