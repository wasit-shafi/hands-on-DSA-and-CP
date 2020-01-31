import static java.lang.Math.sqrt;
import java.util.Scanner;
public class Factors
{
    public static void getFactors(Integer number)
    {
        for(int i = 1 ; i <= sqrt(number) ; i++) // Because we have used "Static import" so we don't need to prefix Class name before function. For more info refer : https://en.wikipedia.org/wiki/Static_import 
            if(number % i == 0) 
            {
                if(number / i == i)
                    System.out.print(i + " ");
                else
                    System.out.print(i + " " + number / i + " ");    
            }
    }
    public static void main(String []args)
    {
        Integer number;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter Number : ");
        number = scan.nextInt();

        System.out.print("Factors of " + number + " is : ");
        getFactors(number);
    }
}