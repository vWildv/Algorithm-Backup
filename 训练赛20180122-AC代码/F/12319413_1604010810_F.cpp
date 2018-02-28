#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n,h,num;
    while(~scanf("%d",&n))
    {
        num = 1;
        int h[n],a[n];
        scanf("%d",&h[0]);
        a[0] = h[0];
        for(i=1;i<n;i++)
        {
            int flag = 0;
            scanf("%d",&h[i]);
            for(j=0;j<num;j++)
            {
                if(h[i]<a[j])
                {
                    a[j] = h[i];
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                num++;
                a[num-1] = h[i];
            }
        }
        cout<<num<<endl;
    }
}