/**
    @author wasitshafi
    @since  09-02-2020
*/
import java.util.Scanner;
import java.util.Arrays;
//In this Algorithm we get prime no by eliminating composite no, its time complexity is O(n.log(log(n)))

public class SieveOfEratosthenes
{
    public static void getPrime1(int n)
    {
        int i, j;
        boolean primes[] = new boolean[n + 1];
        Arrays.fill(primes, true);

        for(i = 2 ; i <= n ; i++)
            for(j = 2 ; i*j <= n ; j++)
                primes[i*j] = false;

        for(i = 2 ; i <= n ; i++) if(primes[i] == true) System.out.print(i + " ");
    }
    public static void getPrime2(int n)
    {
        int i, j;
        boolean primes[] = new boolean[n + 1];
        Arrays.fill(primes, true);

        for(i = 2 ; i <= Math.sqrt(n) ; i++) // as we know factors are in pairs, and there will not be any factor of n which is greater than n/2
            for(j = 2 ; i*j <= n ; j++)
                primes[i*j] = false;

        for(i = 2 ; i <= n ; i++) if(primes[i] == true) System.out.print(i + " ");
    }
    
    public static void main(String... args)
    {
        int n;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter value of n : ");
        n = scan.nextInt();
        System.out.println();
        
        System.out.print("Prime no from 1 to " + n + " are : ");
        getPrime1(n);

        System.out.println("\n");
        System.out.print("Prime no from 1 to " + n + " are : ");
        getPrime2(n);     // optimized
        
        System.out.println();
        scan.close();
    }
}