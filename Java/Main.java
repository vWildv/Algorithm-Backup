import java.io.*;
import java.util.*;

public class Main{
    public static void main(String[] args)throws Exception{
        Scanner cin=new Scanner(System.in);
        while(cin.hasNext()){
            int a=cin.nextInt();
            int b=cin.nextInt();
            int c=cin.nextInt();
            int sum=0;
            for(int i=a;i<=b;i++){
                if(get(i,c)==1) sum+=i;
            }
            System.out.println(sum);
        }
    }
    public static int get(int x,int c){
        while(x>0){
            if(x%10==c) return 1;
            x/=10;
        }
        return 0;
    }
}