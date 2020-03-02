/**
    @author wasitshafi
    @since  28-01-2020
*/
//ref : https://www.tutorialspoint.com/Knuth-Morris-Pratt-Algorithm
//      https://github.com/mission-peace/interview/blob/master/src/com/interview/string/SubstringSearch.java
//      https://www.youtube.com/watch?v=GTJr8OvyEVQ

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class KMP
{
    static int[] getlps(String pattern, int patternLength)
    {
        int i, j, lps[] = new int[patternLength];
        j = 0;
        i = 1;
        lps[0] = 0;
        while(i < patternLength)
        {
            if(pattern.charAt(i) == pattern.charAt(j))
                lps[i++] = ++j;
            else
            {
                if(j == 0)
                    lps[i++] = 0;
                else
                    j = lps[j - 1];
            }
        }
        return lps;
    }

    static int KMPSearch(String str, String pattern)
    {
        int i, j, strLength, patternLength, lps[], index = -1;

        strLength = str.length();
        patternLength = pattern.length();
        lps = getlps(pattern, patternLength);
        i = j = 0;
        while(i < strLength && j < patternLength)
        {
            if(str.charAt(i) == pattern.charAt(j))
            {
                i++;
                j++;
            }
            else
            {
                if(j == 0)
                    i++;
                else
                    j = lps[j - 1];
            }
        }
        if(j == patternLength) index = i - patternLength;
        return index;
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

        /*str = "ABABDABACDABABCABAB";
        pattern = "ABABCABAB"; */
        index = KMPSearch(str, pattern);

        if(index == -1)
            System.out.println("Pattern not found");
        else
            System.out.println("Pattern found at index " + index);
        br.close();
    }
}