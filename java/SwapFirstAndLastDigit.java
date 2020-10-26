/**
 *  @author WasitShafi
 *  @since 15-OCT-2020
 */
import java.nio.file.attribute.FileTime;
import java.util.Scanner;

public class SwapFirstAndLastDigit {
  public static int reverse(int n) {
    int reverse = 0;
    while (n != 0) {
      reverse = reverse * 10 + n % 10;
      n /= 10;
    }
    return reverse;
  }

  public static int swap(int n) {
    if (n < 10) {
       return n;
    } else {
      int ans;
      int lastDigit;
      int firstDigit;
      lastDigit = n % 10;
      n /=10;
      n = reverse(n);
      firstDigit = n % 10;
      n /= 10;

      ans = lastDigit;
      while (n != 0) {
         ans = ans * 10 + n % 10;
         n /= 10;
      }
      ans = ans * 10 + firstDigit;

     return ans;
    }
  }

  public static void main(String[] args) {
    int n;
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter value of n... ");
    n = scanner.nextInt();
    System.out.println("n : " + n);
    System.out.println("n : " + swap(n));
    scanner.close();
  }
}
