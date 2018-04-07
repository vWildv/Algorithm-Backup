import java.util.*;  
import java.math.*;

class Animal{  
    String name;  
    int op;
    Animal(int opp,String b){  
        op=opp;  
        name=b;
    }
    public String getanimalname(){  
        return name;  
    }  
}

class Simulator{  
    public void playsound(Animal a){  
        if(a.op==0) System.out.println("Miao,Miao...");  
        if(a.op==1) System.out.println("Wang,Wang...");  
    }  
}
class Dog extends Animal{  
    Dog(int opp, String b) {  
        super(opp, b);  
    }   
}

class Cat extends Animal{  
    Cat(int opp, String b){  
        super(opp, b);  
    }  
}

public class Main{  
    public static void main(String args[]) throws Exception{
        Scanner cin=new Scanner(System.in);
        while(cin.hasNextInt()){  
            int flag=cin.nextInt();
            String name1=cin.nextLine();
            name1=name1.replace(" ","");
            if(flag==0){
                Animal cat=new Animal(flag,name1);
                Cat cat1=new Cat(flag,name1);  
                String nn;  
                nn=cat1.getanimalname();  
                System.out.printf("%s:",nn);  
                Simulator pp=new Simulator();  
                pp.playsound(cat);  
            }  
            if(flag==1){  
                Animal dog=new Animal(flag,name1);  
                Dog dog1=new Dog(flag,name1);  
                String nn;  
                nn=dog1.getanimalname();  
                System.out.printf("%s:",nn);  
                Simulator pp=new Simulator();  
                pp.playsound(dog);  
            }  
        }  
    }  
}  