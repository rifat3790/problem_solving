import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int X = s.nextInt();
        int Y = s.nextInt();

        if (X == 1) {
            System.out.printf("Total: R$ %.2f%n", (4.00 * Y));
        } else if (X == 2) {
            System.out.printf("Total: R$ %.2f%n", (4.50 * Y));
        } else if (X == 3) {
            System.out.printf("Total: R$ %.2f%n", (5.00 * Y));
        } else if (X == 4) {
            System.out.printf("Total: R$ %.2f%n", (2.00 * Y));
        } else if (X == 5) {
            System.out.printf("Total: R$ %.2f%n", (1.50 * Y));
        }

        s.close();
    }
}