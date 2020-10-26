/**
 *  @author WasitShafi
 *  @since 15-OCT-2020
 */
import java.util.*;

public class GetAllDigits {
  public static void main(String[] args) {
    int n;
    int noOfDigits;
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter value of n... ");
    n = scanner.nextInt();
    noOfDigits = (int)Math.log10(n) + 1;
    System.out.println("Last Digit : " + n % 10); // or n % pow(10, 1);
    System.out.println("Last Digit : " + n % (int) Math.pow(10, 1)); // or n % pow(10, 1);
    System.out.println("First Digit : " + n / (int) Math.pow(10, noOfDigits - 1)); // or instead of -1, use noOfDigits = (int)Math.log10(n);

    for(int i = 1; i <= noOfDigits; i++) {
      System.out.printf("Remainng : %5d , %2d Digits => %5d\n", n / (int)Math.pow(10, i), (noOfDigits - i), n % (int)Math.pow(10, i)); // CTM : we  can also get the first digit of last n number using the same above formula
    }
    scanner.close();
  }
}
