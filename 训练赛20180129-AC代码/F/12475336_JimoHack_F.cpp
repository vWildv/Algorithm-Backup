#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
class Point
{
public :
        int x,y;
        int ChaJi(Point , Point);
        Point(int _x=0,int _y=0)
        {
                x=_x;y=_y;
        }
        Point operator=(Point);
};
Point Point::operator=(Point b)
{
        this->x=b.x;
        this->y=b.y;
        return (*this);
}
int Point::ChaJi(Point b,Point c)
{
        return((x-b.x)*(c.y-b.y)-(c.x-b.x)*(y-b.y));
}
int main()
{
        int n;
        while(~scanf("%d",&n))
        {
                Point point[n+5];
                for(int i=0;i<=n;++i)
                        scanf("%d%d",&point[i].x,&point[i].y);
                point[n+1]=point[1];
                int sum=0;
                for(int i=1;i<=n;++i)
                {
                        point[i-1].ChaJi(point[i],point[i+1])<0 && ++sum;
                }
                printf("%d\n",sum);
        }
}
