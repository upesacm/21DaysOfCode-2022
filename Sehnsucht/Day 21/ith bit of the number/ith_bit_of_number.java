import java.util.Scanner;
public class ith_bit_of_number {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i=sc.nextInt();
        System.out.println(check(n,i));
    }

    private static int check(int n, int i) {
        return (n&(1<<(i-1)))>>(i-1);
    }

}
