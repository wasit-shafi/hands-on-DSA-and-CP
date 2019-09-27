//
//printAllSubSequence.java
//
//program to print all subsequence of a given string.
//
import java.util.Scanner;
//For more info refer : https://www.youtube.com/watch?v=EJwCUCjb9HM&list=PLrk5tgtnMN6QkNhdIiClZIhxJGwzCEVv9&index=20
public class printAllSubSequence
{
    static void subsequences(String input, String output)
    {
        if(input.length() == 0 )
        {
            System.out.println(output);
            return;
        }
        subsequences(input.substring(1), output);
        subsequences(input.substring(1), output + input.charAt(0));
    }
    public static void main(String []args)
    {
        String str;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter String : ");
        str = scan.nextLine();

        System.out.println("String : " + str);
        System.out.print("Subsuquences are as follows : ");
        subsequences(str, "");
    }
}