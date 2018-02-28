#include <stdio.h>  
#include <string.h>  
#include <iostream>  
using namespace std;  
int a[100005][12];  
int main()  
{  
    int n,m,maxx=0,t;  
    while(~scanf("%d",&n))  
    {  
        if(!n)  
           break;  
        memset(a,0,sizeof(a));  
        for(int i=0;i<n;i++)  
        {  
            scanf("%d%d",&m,&t);  
            a[t][m]++;
            if(t>maxx) 
              maxx=t;  
        }  
        for(int i=maxx-1;i>=0;i--)
        {  
            a[i][0]+=max(a[i+1][0],a[i+1][1]);
            for(int j=1;j<10;j++)  
               a[i][j]+=max(max(a[i+1][j+1],a[i+1][j-1]),a[i+1][j]);  
            a[i][10]+=max(a[i+1][10],a[i+1][9]);  
        }  
        printf("%d\n",a[0][5]);  
    }  
    return 0;  
}  
