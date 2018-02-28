#include<stdio.h>
#include<iostream>
#include<string.h>
#include<queue>
#include<math.h>
#include<algorithm>
#define ll long long int
using namespace std;

int main()
{
    int n,a,b;
    while(~scanf("%d%d%d",&n,&a,&b))
    {
        if(b<0){
                b=-b;
        for(int i=0;i<b;i++)
        {
            if(a==1) a=n;
            else  a--;
        }
        printf("%d\n",a);
        continue;
        }
        else {
            for(int i=0;i<b;i++)
            {

                if(a==n) a=1;
                else a++;
            }
        }
        printf("%d\n",a);

    }
}