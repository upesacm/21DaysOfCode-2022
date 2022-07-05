import java.util.Scanner;

public class reset_ith_bit {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i=sc.nextInt();
        System.out.println(reset(n,i));
    }

    private static int reset(int n, int i) {
        return n&(~(1<<(i-1)));
    }
}
