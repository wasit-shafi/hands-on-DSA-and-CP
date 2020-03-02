/**
 * @author wasit shafi
 * Source : https://github.com/wasitshafi/Competitive-Programming/blob/master/java/sumOfAllSubsetsUsingArrayPrefixSum.java
 */
import java.util.Scanner;

public class sumOfAllSubsetsUsingArrayPrefixSum
{
    public static void getSum(int arr[]) // Time Complexity : O(n^3)
    {
        for(int i = 0 ; i < arr.length ; i++)
        {
            for( int j = i ; j < arr.length ; j++)
            {
                if(i == j)
                  System.out.print("arr[" + i +"] = ");
                else
                  System.out.print("arr[" + i +"] : arr[" + j + "] = ");
                int sum = 0;
                for( int k = i ; k <= j ; k++) sum += arr[k];
                System.out.println(sum); 
            }
            System.out.println();
        }
    }
    public static void getSumUsingPrefixSum(int arr[]) // Time Complexity : O(n^2)
    {
        int prefixSum[] = arr.clone();
        int sum = 0;

        for(int i = 0 ; i < prefixSum.length ; i++)
        {
            sum += prefixSum[i];
            prefixSum[i] = sum;
        }
    
        for(int i = 0 ; i < arr.length ; i++)
        {
            for( int j = i ; j < arr.length ; j++)
            {
                if(i == 0)  // Special case
                {
                    if(j == 0)    // arr[0] to arr[0] i.e sum of arr[0]
                        System.out.println("arr[" + i +"] = " + prefixSum[i]);
                    else
                        System.out.println("arr[" + i +"] : arr[" + j + "] = " + prefixSum[j]);  // [0]to[1], [0]to[2], [0]to[3]...
                }
                else if (i == j)
                    System.out.println("arr[" + i +"] = " + (prefixSum[j] - prefixSum[i - 1]) );
                else
                    System.out.println("arr[" + i +"] : arr[" + j + "] = " + (prefixSum[j] - prefixSum[i - 1]) );
            }
            System.out.println();
        }
    }
    public static void main(String []args)
    {
        int n, arr[];
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter no. of elements : ");
        n = scan.nextInt();
        arr = new int[n];

        for( int i = 0 ; i < arr.length ; i++)
        {
            System.out.print("Arr[" + (i + 1) + "] : ");
            arr[i] = scan.nextInt();
        }

        System.out.print("\nArray elements are as : ");
        for( int i = 0 ; i < arr.length ; i++) System.out.print(arr[i]+ " ");
    
        System.out.println("Sum of all possible subsets of array [Time Complexity : O(n^3)] : ");
        getSum(arr);
        System.out.println("\nSum of all possible subsets of array using Prefix Sum [Time Complexity : O(n^2)] : ");
        getSumUsingPrefixSum(arr);
    
        scan.close();
    }
}