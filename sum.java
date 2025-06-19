import java.util.*;

public class sum {
    public static void main(String args[]){
        int sum_total=0;
        Scanner sc = new Scanner (System.in);
        int number=sc.nextInt();
    
        for (int i=0;i<=number;i++){
            sum_total = sum_total + i;
        }
        System.out.println(sum_total);
        }
}

