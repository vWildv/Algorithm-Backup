import java.math.BigInteger;  
import java.util.*;  
import java.math.*;  

public class Main {  
    static BigInteger one=BigInteger.ONE;  
    static BigInteger zero=BigInteger.ZERO;
    static BigInteger ten=BigInteger.TEN;
    static BigInteger ans; 
    static BigInteger z;
    static int n;

    public static BigInteger qpow(BigInteger a,int b){
        BigInteger ans=one;
        while(b>0){
            if(b%2==1) ans=ans.multiply(a);
            b/=2;
            a=a.multiply(a);
        }
        return ans;
    }

    public static int check(int x,int y) {  
        BigInteger xx=BigInteger.valueOf(x);  
        BigInteger yy=BigInteger.valueOf(y);  
        ans=qpow(xx,n).add(qpow(yy,n)).subtract(qpow(z,n));  
        return ans.compareTo(zero);
    }

    public static void main(String args[]){  
        Scanner cin=new Scanner(System.in);      
        int t=cin.nextInt();
        while(t-->0){  
            n=cin.nextInt(); z=cin.nextBigInteger();
            int ansx=0; int ansy=0;
            BigInteger tmp=BigInteger.valueOf(1);
            for(int i=1;i<=55;i++) tmp=tmp.multiply(ten);
            BigInteger inf=tmp;
            int cnt=0;
            for(int i=z.intValue()-1;i>=1;i--){
                if(cnt>5000) break;
                cnt++;
                BigInteger _inf=inf.multiply(BigInteger.valueOf(-1));  
                BigInteger tinf=inf;  
                int l=1,r=i-1;  
                int tmpx=0,tmpy=0;
                while(l<=r){
                    int mid=(l+r)>>1;  
                    if(check(mid,i)==-1){
                        if(_inf.compareTo(ans)==-1){  
                            _inf=ans;
                            tmpx=mid;
                        }
                        l=mid+1;  
                    }
                    else if(check(i, mid)==0){  
                        tmpy=mid;
                        tmp=zero;
                        break;
                    }
                    else{
                        if(tinf.compareTo(ans)==1){  
                            tinf=ans;  
                            tmpy=mid;  
                        }
                        r=mid-1;  
                    }
                }
                _inf=_inf.multiply(BigInteger.valueOf(-1));
                if(tmp.compareTo(zero)==0){  
                    ansx=i;  
                    ansy=tmpy;  
                    break;  
                }
                if(tmp.compareTo(_inf)==1){  
                    tmp=_inf;  
                    ansx=i;
                    ansy=tmpx;
                    cnt=0;
                }
                if(tmp.compareTo(tinf)==1){  
                    tmp=tinf;  
                    ansx=i;  
                    ansy=tmpy;
                    cnt=0;
                }
            }
            System.out.println(Math.min(ansx,ansy)+" "+Math.max(ansx,ansy)+" "+tmp);  
        }  
    }  
}