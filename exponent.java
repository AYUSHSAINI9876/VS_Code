import java.util.*;
public class exponent {

    public static void printExponent(int x,int n){
        int result = 1;
        for (int i = 0; i < n; i++) {
            result *= x;
            System.out.println(result);
            }
        return;
        }
       
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int x = sc.nextInt();
        int n = sc.nextInt();
        printExponent(x,n);
       
    }
}




