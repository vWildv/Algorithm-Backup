#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    char a[205];
    int i,j;
    int n;
    int num;
    while(gets(a))
    {   num=0;
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if(a[i]=='b'&&a[i+1]=='k'&&a[i+2]=='p'&&a[i+3]=='s'&&a[i+4]=='t'&&a[i+5]=='o'&&a[i+6]=='r')
              {
                  num++;
                  break;
              }
        }
        if(num==1)
        printf("Warning\n");
        else
        printf("Safe\n");

    }
}
