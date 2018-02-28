import java.util.*;
import java.math.BigInteger;

public class Main{

	static int cal(int m,int n){
		int sum1 = 0;
		int sum2 = 0;
		int i = m;
		for(int j = n;j > 0;j --){
			int t1 = i;
			int t2 = j;
			while(t1 % 2 == 0){
				sum1 ++;
				t1 = t1 / 2;
			}
			while(t2 % 2 == 0){
				sum2 ++;
				t2 = t2 / 2;
			}
			i --;
		}
		return (sum1 - sum2);
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int T = sc.nextInt();
		//String enter = sc.nextLine();
		while(T > 0){
		//while(sc.hasNext()){
			int m = sc.nextInt();
			int n = sc.nextInt();
			int ans = cal(m,n);
			System.out.println(ans);
			T --;
		}
	}
}
