#include <stdio.h>
#include <string.h>
//using namespace std;

typedef long long LL;
LL sum, maxSum;
LL minNum, n;

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

void getAntiPrime(LL num, LL sum, int k, int limit)
{
    if(sum>maxSum)
    {
        maxSum=sum;
        minNum=num;
    }
    else if(sum==maxSum && num<minNum)
    {
        minNum=num;
    }
    else if(num>=minNum)
    {
        return;
    }

    if(k==15) return;

    for(int i=1;;i++)
    {
        num*=prime[k];
        if(num>n) break;
        getAntiPrime(num, sum*(i+1), k+1, i);
    }
}

int main()
{
    while(~scanf("%lld", &n))
    {
        maxSum=0;
        getAntiPrime(1,1,0,50);
        printf("%lld\n", minNum);
    }
}
