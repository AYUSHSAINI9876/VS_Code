import java.util.Scanner;

public class fibonnaci {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Ask the user for the number of terms
        System.out.print("Enter the number of terms: ");
        int n = sc.nextInt();
        
        // Variables to store the first two terms of the series
        int firstTerm = 0;
        int secondTerm = 1;
        
        System.out.print("Fibonacci Series: ");
        
        // Loop to print the series
        for (int i = 1; i <= n; i++) {
            System.out.print(firstTerm + " ");
            
            // Calculate the next term
            int nextTerm = firstTerm + secondTerm;
            
            // Update the terms
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
}
