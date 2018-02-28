#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>
using namespace std;
long long res[100005];
main()
{
    int num,money,i;
    map<int,int>stu;
    while(cin>>num>>money)
    {
        memset(res,0,sizeof(res));
        int test;
        for(i=1; i<=num; i++)
        {
            cin>>test;
            stu[test]=1;
        }
        long long summoney=0,sum=0;
        int j=1;
        for(i=1;; i++)
        {
            if(stu[i]!=1)sum++,summoney=summoney+i,res[j]=i,j++;
            if(summoney>money)
            {
                cout<<sum-1<<endl;
                break;
            }
        }
        for(i=1; i<j-1; i++)
        {
            if(i==1)cout<<res[i];
            else cout<<' '<<res[i];
        }
        if((sum-1)!=0)cout<<endl;
    }
    return 0;
}
