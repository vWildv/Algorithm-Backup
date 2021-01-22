import java.io.*;
import java.util.*;
import java.math.*;

public class Main{
    public static BigInteger two=BigInteger.valueOf(2);
    public static BigInteger six=BigInteger.valueOf(6);
    public static BigInteger[] a=new BigInteger[1005];
    public static void f(){
        a[1]=BigInteger.valueOf(3);
        a[2]=BigInteger.valueOf(20);
        for(int i=3;i<=1000;i++){
            a[i]=a[i-1].multiply(six);
            a[i]=a[i].subtract(a[i-2]).add(two);
        }
    }
    public static void main(String[] args){
        int t;
        Scanner cin=new Scanner(System.in);
        t=cin.nextInt();
        f();
        while(t-->0){
            BigInteger n=cin.nextBigInteger();
            for(int i=1;i<=300;i++){
                if(n.compareTo(a[i])==-1){
                    System.out.println(a[i]);
                    break;
                }
            }
        }
    }
}