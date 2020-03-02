/**
    @author wasitshafi
    @since  25-01-2020
*/

import java.io.BufferedReader;
import java.io.InputStreamReader;
// Application of String Searching in hackerearth code monk Question : https://github.com/wasitshafi/hackerearthsolutions/blob/master/Code%20Monk/3-Implementation/Basics%20of%20Implementation/Little%20Jhool%20and%20psychic%20powers/TestClass.java 
public class RabinKarpSearch
{
    // we use primeno & hashfunction instead of simple sum of ascii value so to make as much as possible unique value for pattern/substring, so to reduce no of collisions.
    private static int primeno = 101;
    public static long getHash(String str, long len)
    {
        long hash = 0;
        for(int i = 0 ; i < len ; i++) hash += str.charAt(i) * Math.pow(primeno, i);
        return hash;
    }

    public static long getHashRepeatedly(long strHashValue, char oldChar, char newChar, int patternLength)
    {   
        strHashValue = strHashValue - oldChar; 
        strHashValue = strHashValue / primeno;
        strHashValue = strHashValue + newChar * (long)Math.pow(primeno, patternLength - 1);
        return strHashValue;
    }

    public static int patternSearch(String str, String pattern)
    {
        int strLength = str.length();
        int patternLength = pattern.length();

        if(strLength >= patternLength)
        {
            long patternHashValue = getHash(pattern, patternLength);
            long strHashValue = getHash(str, patternLength);             

            if(strHashValue == patternHashValue) return 0;
            for(int i = 1 ; i < strLength - patternLength + 1 ; i++)
            {
                strHashValue = getHashRepeatedly(strHashValue, str.charAt(i - 1), str.charAt(i + patternLength - 1), patternLength);
                if(patternHashValue == strHashValue && pattern.equals(str.substring(i, i + patternLength)) ) return i;
            }
        }
        return -1;
    }

    public static void main(String... args) throws Exception
    {
        int index;
        String str, pattern;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        System.out.print("Enter String... ");
        str = br.readLine();
        
        System.out.print("Enter pattern... ");
        pattern = br.readLine();
  
        index = patternSearch(str, pattern);
        
        if(index != -1)
            System.out.println("Found at index " + index);
        else
            System.out.println("Not Found");
        br.close();
    }
}