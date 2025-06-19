import java.util.*;
public class circle {

    public static void printCircumference(double r){
        System.err.println(3.14*r*r);
        return;
        }
       
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        double r = sc.nextDouble();
        printCircumference(r);
       
    }
}
