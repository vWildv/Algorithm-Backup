#include <iostream>
using namespace std;
bool same(int y)
{
    if((y%400==0)||(y%4==0&&y%100!=0))  return 1;
    return 0;
}
int main()
{
    int y;
    while(cin>>y)
    {
        int i,x=0;
        for(i=y+1;;i++)
        {
            if(same(i))
            {
                x+=2;
                x%=7;
            }
            else
            {
                x++;
                x%=7;
            }
            if(x==0)
            {
                if(same(y)==same(i))  break;
            }
        }
        cout<<i<<endl;
    }
    return 0;
}
