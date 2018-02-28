#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <queue>
#include <string>
#include <vector>
#include <map>
#define True 9999
using namespace std;
long long int feibo[100000];
map<int,int> mymap;
void init()
{
    feibo[0]=0;
    feibo[1]=1;
    feibo[2]=1;
    int i=3;
    do
    {
        feibo[i]=feibo[i-2]+feibo[i-1];
        mymap[feibo[i]]=True;
    }while(feibo[i++]<=2147483648);
}
int main()
{
    init();
    int n;
    while(~scanf("%d",&n))
    {
        if(n==0) break;
        if(mymap[n]==True)
            cout<<"Second win"<<endl;
        else
            cout<<"First win"<<endl;
    }
}
