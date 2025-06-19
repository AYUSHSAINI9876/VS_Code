import java.util.Scanner;

public class total_count {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int positiveCount = 0;
        int negativeCount = 0;
        int zeroCount = 0;

        while (true) {
            System.out.println("Enter a number (or type 'exit' to stop):");

            // Check if the next input is a number or the string "exit"
            if (sc.hasNextInt()) {
                int number = sc.nextInt();
                if (number > 0) {
                    positiveCount++;
                } else if (number < 0) {
                    negativeCount++;
                } else {
                    zeroCount++;
                }
            } else if (sc.hasNext()) {
                String input = sc.next();
                if (input.equalsIgnoreCase("exit")) {
                    break;
                } else {
                    System.out.println("Invalid input. Please enter a number or 'exit' to stop.");
                }
            }
        }

        // Display the counts
        System.out.println("Positive numbers count: " + positiveCount);
        System.out.println("Negative numbers count: " + negativeCount);
        System.out.println("Zeroes count: " + zeroCount);

        sc.close();
    }
}

