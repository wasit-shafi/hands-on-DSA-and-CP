/**
 *  @author WasitShafi
 *  @since 28-OCT-2020
 */
import java.util.Random;
import java.util.Arrays;
import java.util.Scanner;

public class OneTwoThreeHighestSmallestNumbers {
  public static void maxMin1(int[] arr) {
    int max1 = Integer.MIN_VALUE;
    int min1 = Integer.MAX_VALUE;

    for (Integer element : arr) {
      if (element > max1) {
        max1 = element;
      }

      if (element  < min1) {
        min1 = element;
      }
    }
    System.out.println("Max1 : " + max1);
    System.out.println("Min1 : " + min1);
  }

  public static void maxMin2(int[] arr) {
    int max1 = Integer.MIN_VALUE;
    int max2 = Integer.MIN_VALUE;
    int min1 = Integer.MAX_VALUE;
    int min2 = Integer.MAX_VALUE;

    for (Integer element : arr) {
      if (element > max1) {
        max2 = max1;
        max1 = element;
      } else if (element > max2) {
        max2 = element;
      }

      if (element  < min1) {
        min2 = min1;
        min1 = element;
      } else if (element < min2) {
        min2 = element;
      }
    }
    System.out.println("Max1 : " + max1);
    System.out.println("Max2 : " + max2);
    System.out.println("Min1 : " + min1);
    System.out.println("Min2 : " + min2);
  }

  public static void maxMin3(int[] arr) {
    int max1 = Integer.MIN_VALUE;
    int max2 = Integer.MIN_VALUE;
    int max3 = Integer.MIN_VALUE;
    int min1 = Integer.MAX_VALUE;
    int min2 = Integer.MAX_VALUE;
    int min3 = Integer.MAX_VALUE;

    for (Integer element : arr) {
      if (element > max1) {
        max3 = max2;
        max2 = max1;
        max1 = element;
      } else if (element > max2) {
        max3 = max2;
        max2 = element;
      } else if (element > max1) {
        max3 = element;
      }

      if (element  < min1) {
        min3 = min2;
        min2 = min1;
        min1 = element;
      } else if (element < min2) {
        min3 = min2;
        min2 = element;
      } else if (element < min3) {
        min3 = element;
      }
    }
    System.out.println("Max1 : " + max1);
    System.out.println("Max2 : " + max2);
    System.out.println("Max3 : " + max3);
    System.out.println("Min1 : " + min1);
    System.out.println("Min2 : " + min2);
    System.out.println("Min3 : " + min3);
  }

  public static void main(String[] args) {
    int n;
    int[] arr;
    Random random = new Random();
    Scanner scanner = new Scanner(System.in);

    System.out.print("Enter value of n... ");
    n = scanner.nextInt();
    arr = new int[n];
    for (int i = 0; i < n; i++) {
      arr[i] = random.nextInt(200);
    }

    System.out.println("arr[] : " + Arrays.toString(arr));
    maxMin1(arr);
    System.out.println();
    maxMin2(arr);
    System.out.println();
    maxMin3(arr);
    scanner.close();
  }
}
