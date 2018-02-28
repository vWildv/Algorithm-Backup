#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char aa[105];
    while(gets(aa))
    {
        int i , j = 0 , len = strlen(aa);
        for ( i = 0 ; i < len ; i ++)
        {                       //bkpstor
            if (aa[i]=='b'&&aa[i+1]=='k'&&aa[i+2]=='p'&&aa[i+3]=='s'&&aa[i+4]=='t'&&aa[i+5]=='o'&&aa[i+6]=='r')
            {
                cout<<"Warning"<<endl;
                j ++ ;
                break;
            }
        }
        if ( j == 0 )
            cout<<"Safe"<<endl;
    }return 0;
}
