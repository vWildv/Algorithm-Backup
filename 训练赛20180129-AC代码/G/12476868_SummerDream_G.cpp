#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
main()
{
    int num,i,j,test,testnum;
    while(cin>>num)
    {
        int a[num+1];
        int judge[num+1];
        int sum=0;
        memset(judge,0,sizeof(judge));
        for(i=1; i<=num; i++)
            cin>>a[i];
        sort(a+1,a+1+num);
        for(i=1; i<=num; i++)
        {
            if(judge[i]==0)test=a[i],testnum=i;
            for(j=i+1; j<=num; j++)
            {
                if(a[j]>test&&judge[j]==0)
                {
                sum++,judge[testnum]=1,test=a[j],testnum=j;}
            }
            judge[testnum]=1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
