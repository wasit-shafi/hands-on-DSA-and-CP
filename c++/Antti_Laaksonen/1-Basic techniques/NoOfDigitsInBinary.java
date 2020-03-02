// Ref : Competitive Programmer’s Handbook by Antti Laaksonen,page no 15
/**
    @author  wasitshafi
    @since   20-01-2020 
*/
import static java.lang.Math.*;
import java.util.Scanner;

public class NoOfDigitsInBinary
{
    static private int getTotalNumberOfDigitsInBaseBNumber(int x, int b)
    {   
        // Total no of digits of a number 'x' in base 'b' =/ floor(logb(x) + 1)
        return (int)floor(log10(x)/log10(b) + 1); // log10(x)/log10(b) is same as logb(x)
    }

    public static void main(String... args)
    {
        int n, base;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter upper limit : ");
        n = scan.nextInt();

        System.out.print("Enter base... ");
        base = scan.nextInt();
        
        for(int i = 1 ; i <= n ; i++)
        {
            System.out.println("logb(" + i + ") : " + getTotalNumberOfDigitsInBaseBNumber(i, base));
        }
    }
}