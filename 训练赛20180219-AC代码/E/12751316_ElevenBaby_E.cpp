#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    int r,g;
    while(scanf("%d%d",&r,&g)!=EOF)
    {
        if( abs(r-g)>=2 || r==0&&g==0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}