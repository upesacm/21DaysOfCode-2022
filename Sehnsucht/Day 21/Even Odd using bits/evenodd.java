import java.util.Scanner;

public class evenodd {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(checkodd(n)){
            System.out.println(n+" is an odd number");
        }else{
            System.out.println(n+" is an even number");
        }
    }
    public static boolean checkodd(int n){
        return (n & 1) == 1;
    }
}
