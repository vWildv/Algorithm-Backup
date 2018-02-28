#include<stdio.h>
#include<math.h>
//#include<algorithm>
#include<stdlib.h>
//using namespace std;
int main ()
{
    int red=0,lv=0;
    int n,m;
    int tmp;
    int i,j;
    while(~scanf("%d%d",&red,&lv))
    {
        if(red==0&&lv==0)
            printf("NO\n");

        else
        {
            if(abs(red-lv)<2)
                printf("YES\n");
            else
                printf("NO\n");
        }

    }

}

