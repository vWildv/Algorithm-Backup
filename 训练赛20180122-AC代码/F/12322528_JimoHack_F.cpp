#include<stdio.h>
#include<iostream>
using namespace std;
int num[100005];
int daodan[100005];
int n,cnt;
int main()
{
    while(cin>>n)
    {
        daodan[0]=0;
        cnt=0;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&num[i]);
            for(int j=0;j<=cnt;++j)
            {
                if(num[i]<daodan[j])
                {
                    daodan[j]=num[i];
                    break;
                }
                else if(j==cnt)
                {
                    daodan[++cnt]=num[i];
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
}
