/**
 *  @author WasitShafi
 *  @since 23-SEP-2020
 */
public class primeFactorial {
  public static boolean isPrime(long n) {

    if(n < 2) {
      return false;
    }
    for (long i = 2; i*i <= n; i++) {
      if (n % i == 0) {
        return false;
      }
    }
    return true;
  }

  public static int factorialPrime(long n) {
    if (!isPrime(n)) {
      return -1;
    }

    int i = 1;
    int fact = 1;
    while (fact <= n + 1) {
      if (fact - 1 == n || fact + 1 == n) {
        return i;
      }
      fact = fact * ++i;
    }
    return -1;
  }
  public static void main(String[] args) {
    int n;

    System.out.print("Enter Value of n : ");
    n = new java.util.Scanner(System.in).nextInt();
    
    System.out.println("Factorial Prime upto n : ");
    for (int i = 0; i < n; i ++) {
      if(factorialPrime(i) != -1) {
         System.out.print(i + " ");
      }
    }
  }
 }