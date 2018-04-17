import java.util.*;  
import java.math.*;

class Circle{
    double x,y;
    double r;
    public static void relation(Circle c1,Circle c2){
        double d=Math.sqrt((c1.x-c2.x)*(c1.x-c2.x)+(c1.y-c2.y)*(c1.y-c2.y));
        double t=c1.r+c2.r;
        double s=Math.abs(c1.r-c2.r);
        if(d>t) System.out.println("aparted");
        else if(d==t||d==s) System.out.println("tangented");
        else if(d<t&&d>s) System.out.println("intersected");
        else if(d<s) System.out.println("involved");
    }
}

public class Main{
    public static void main(String args[]) throws Exception{
        Scanner cin=new Scanner(System.in);
        while(cin.hasNext()){
            Circle c1=new Circle();
            Circle c2=new Circle();
            c1.x=cin.nextDouble();
            c1.y=cin.nextDouble();
            c1.r=cin.nextDouble();
            c2.x=cin.nextDouble();
            c2.y=cin.nextDouble();
            c2.r=cin.nextDouble();
            Circle.relation(c1,c2);
        }
    }
}