import java.util.Scanner;

public class subStringFrequency
{
    public static void main(String []args)
    {
        int freq = 0;
        String str;
        String subStr;
        
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter string : ");
        str = scan.nextLine();
        
        System.out.print("Enter Sub-String : ");
        subStr = scan.nextLine();

        for( int i = 0 ; i < str.length() - subStr.length() + 1 ; i++)
        {
            String s = str.substring(i, i + subStr.length());
            if(s.equals(subStr)) freq++;
        }
        
        System.out.print("Frequency of sub-string is : " + freq);
    }
}