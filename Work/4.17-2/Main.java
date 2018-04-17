import java.util.*;  
import java.math.*;

public class Main{
    public static void main(String args[]) throws Exception{
        Scanner cin=new Scanner(System.in);
        while(cin.hasNext()){
            String s=cin.nextLine();
            String[] str=s.split("-");
            int[] a=new int [3];
            for(int i=0;i<=1;i++) a[i]=Integer.valueOf(str[i]);
            int l=a[0]; int r=a[1];
            for(int i=l;i<=r;i++)
                if(check(i)) System.out.println(i);
        }
    }
    public static Boolean check(int x){
        if(x==0||x==1) return false;
        for(int i=2;i*i<=x;i++) if(x%i==0) return false;
        return true;
    }
}