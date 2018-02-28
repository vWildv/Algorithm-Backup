import java.util.*;
import java.math.BigInteger;

public class Main{
	static int fib[] = new int[50];
	static void init(){
		fib[0] = 0;  
		fib[1] = 1;  
    		for(int i = 2; i < 48; i ++){  
			fib[i] = fib[i-1] + fib[i-2];  
		}  
	}


	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		//int T = sc.nextInt();
		init();
		//String enter = sc.nextLine();
		//while(T > 0){
		while(sc.hasNext()){
			int n = sc.nextInt();
			if(n == 0){break;}
			int flag = 1;  
			for(int i = 2; i <= 48; i ++){  
				if(n == fib[i]){  
					System.out.println("Second win");  
					flag = 0;  
					break;  
				}  
			} 
			if(flag == 1){
				System.out.println("First win");
			} 
			//T --;
		}
	}
}
