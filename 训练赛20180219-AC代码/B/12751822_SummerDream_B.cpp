#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
using namespace std;
int gcd(int a,int b)
{
    return b?gcd(b,a%b):a;
}
int before[100005],after[100005],a[100005];
int main()
{
    int i,j,last,maxgcd;
    int testnum;
    scanf("%d",&testnum);

        while(testnum--)
        {
            int num;
            scanf("%d",&num);
            for(i=1; i<=num; i++)
                scanf("%d",&a[i]);
            before[1]=a[1];
            for(i=2; i<=num; i++)
                before[i]=gcd(before[i-1],a[i]);
            after[num]=a[num];
            for(i=num-1; i>=0; i--)
                after[i]=gcd(after[i+1],a[i]);
            maxgcd=1;
            for(i=2; i<=num-1; i++)
                maxgcd=max(maxgcd,gcd(after[i+1],before[i-1])); ///between
            maxgcd=max(maxgcd,after[2]);/// the first is not used
            maxgcd=max(maxgcd,before[num-1]); ///the last is not used
            printf("%d\n",maxgcd);
        }

    return 0;
}
