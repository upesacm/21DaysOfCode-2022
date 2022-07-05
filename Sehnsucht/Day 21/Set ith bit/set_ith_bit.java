import java.util.Scanner;
public class set_ith_bit {
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i=sc.nextInt();
        System.out.println(set(n,i));
    }

    private static int set(int n, int i) {
        return ((1<<i-1)|n);
    }
}
