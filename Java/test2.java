import java.io.*;
import java.util.*;

public class test2{
    public static void main(String[] args){
        Scanner cin=new Scanner(System.in);
        int l=100,r=999;
        l=cin.nextInt(); r=cin.nextInt();
        for(int i=l;i<=r;i++)
            if(check(i)) System.out.println(i);
    }
    public static int len(int y){
        int cnt=0;
        while(y>0){
            cnt++; y/=10;
        }
        return cnt;
    }
    public static int qpow(int a,int b){
        int ans=1;
        while(b>0){
            if(b%2==1) ans*=a;
            b>>=1; a*=a;
        }
        return ans;
    }
    public static boolean check(int x){
        int sum=0,tmp,tmpx=x,lenx=len(tmpx);
        while(x>0){
            tmp=qpow((x%10),lenx);
            x/=10; sum+=tmp;
        }
        if(sum==tmpx) return true;
        else return false;
    }
}