import java.util.*;

public class table {
    public static void main(String args[]){
        int product=1;
        Scanner sc = new Scanner (System.in);
        int number=sc.nextInt();
    
        for (int i=1;i<=10;i++){
            product= product * i;
            System.out.println(number * i);
        }

        }
}

