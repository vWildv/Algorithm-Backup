#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int a;
int b[100000];
int main()
{
    int n,cnt;
    while( cin>>n )
    {
        memset( b , 0 , sizeof ( b ) );
        cnt=0;
        int i , j ;
        for(i=0;i<n;i++)
        {
            cin>>a;
            for(j=0;j<=cnt;j++)
            {
                if(b[j]>=a)
                {
                    b[j]=a;
                    break;
                }
            }
            if(j>cnt)
            {
                b[++cnt]=a;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}
