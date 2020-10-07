import java.util.Scanner;
public class printAllPermutationOfLengthKWithDublicate
{
    //  i won't prefer to have an extra function as wrapper function and an argument 'n' which is used by geeksforgeeks
    //  refer :https://www.geeksforgeeks.org/print-all-combinations-of-given-length/
     
    static void printAllKLength(String str, String prefix, int k) 
    { 
        if (k == 0) // Base case: k is 0, // print prefix 
        { 
            System.out.println(prefix); 
            return; 
        } 

        for (int i = 0; i < str.length(); i++) // One by one add all characters from set and recursively call for k equals to k-1 
            printAllKLength(str , prefix + str.charAt(i), k - 1);  // Next character of input added   // k is decreased, because we have added a new character 
    } 
    public static void main(String[] args) 
    { 
        String str;
        int k;
        Scanner scan = new Scanner(System.in);

        System.out.print("Enter String : ");
        str = scan.nextLine();
        System.out.print("Enter value of k : ");
        k = scan.nextInt();

        printAllKLength(str, "", k); 
    } 
} 