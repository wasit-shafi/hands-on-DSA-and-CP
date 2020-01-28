/**
    @author wasitshafi
    @since  27-01-2020
*/
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class KMP
{
    private static int piTable[];
    private static String str ="";
    private static String pattern = "";

    private static void computePiTable()
    {
        /*
        loop : for(int i = 1 ; i < pattern.length() ; i++)
        {
            for(int j = 0 ; j < i ; j++)
            {
                if(pattern.charAt(j) == pattern.charAt(i))
                {
                    piTable[i] = j + 1;
                    continue loop;
                }
            }
            piTable[i] = 0; // not found;
        }
        */
        piTable[0] = 0;
        piTable[1] = 0;
        piTable[2] = 1;
        piTable[3] = 2;
        piTable[4] = 0;
    }

    public static int search()
    {
        int strlen = str.length();            // So that we don't have to recall in each iteration
        int patternlen = pattern.length();
        computePiTable();
        for(int i = 0, j = 0 ; i < strlen ; )
        {
            if(str.charAt(i) == pattern.charAt(j+1))
            {
                i++;
                j++;
            }
            else
            {
                if(j == 0)
                    i++;
                else
                    j = piTable[j];
            }
            if(j == patternlen - 1) return i - patternlen;
        }
        return -1;
    }
    
    public static void main(String... args) throws Exception
    {
        int index = 10;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    
        /*
        System.out.print("Enter String... ");
        str = br.readLine();
        
        System.out.print("Enter pattern... ");
        pattern = br.readLine();
        */

        str = "ababcabcabababd";
        pattern = "ababd";
        
        piTable = new int[pattern.length() + 1]; // piTable or lps[](Longest Prefix/Sufix)
        index = search();
        if(index != -1)
            System.out.println("Found at index " + index);
        else
            System.out.println("Not Found");

        br.close();
    }
}