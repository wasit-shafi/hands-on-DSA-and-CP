import java.util.Scanner;
//For more info refer : https://blog.kodegod.com/learn-programming/write-a-program-to-accept-three-numbers-from-user-and-print-them-in-ascending-and-decending-order-in-c-language/
public class PrintThreeNumberInDescendingOrder
{
    public static void main(String[] args)
    {
        int a, b, c;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter Value of a : ");
        a = scan.nextInt();
        System.out.print("Enter Value of b : ");
        b = scan.nextInt();
        System.out.print("Enter Value of c : ");
        c = scan.nextInt();

        if(a <= b && a <= c)
        {  
            if(b < c)  // now we know 'a' will be the first term, so find only who is the second term among (b,c) & print the remaining at third position.  
                System.out.print(a + " " + b + " " + c);
            else
                System.out.print(a + " " + c + " " + b);
        }
        else if(b <= a && b <= c)
        {
            if(a < c) // now we know 'b' will be the first term, so find only who is the second term among (a, c) & print the remaining at third position.  
                System.out.print(b + " " + a + " " + c);
            else
                System.out.print(b + " " + c + " " + a);
        }
        else if(a < b) // upto this point now we already know that 'c' will be the first term so find the second position among (a, b) & print the remaining at third position.
                System.out.print(c + " " + a + " " + b);
        else
                System.out.print(c + " " + b + " " + a);
    }
}