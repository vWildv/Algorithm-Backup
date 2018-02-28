#include<iostream>
#include<stdio.h>
using namespace std;

bool check(int shi,int fen)
{
    int tmph=shi,tmpm=fen;
    if(tmph%10==7 || tmpm%10==7)
        return true;
    else
    {
        tmph/=10;
        tmpm/=10;
        if(tmph%10==7 || tmpm%10==7)
            return true;
        else return false;
    }
}
int main()
{
    int x,shi,fen;
    while(~scanf("%d%d%d",&x,&shi,&fen))
    {
        int cnt=0;
        while(!check(shi,fen))
        {
            if(fen-x<0)
            {
                if(shi==0)
                {
                    shi=23;
                    fen=fen+60-x;
                }
                else
                {
                    shi--;
                    fen=fen-x+60;
                }

            }
            else
            {
                fen-=x;
            }
            cnt++;
            ///cout<<shi<<" "<<fen<<endl;
        }
        printf("%d\n",cnt);
    }
}
