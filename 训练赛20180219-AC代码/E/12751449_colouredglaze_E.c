#include<stdio.h>
int main()
{
    int r,g;
    scanf("%d%d",&r,&g);

    if(r==g+1||r==g&&r>0||g==r+1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
