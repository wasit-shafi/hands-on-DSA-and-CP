/**
    @author wasitshafi
    @since  25-01-2020
*/
import static java.lang.System.out;
import static java.lang.Math.pow;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class RabinKarpSearch
{
    private static int primeno = 101;
    public static long getHash(String str, long len) // why do we use hashfunction along with prime no when we can simply use sum of ascii characters, becasue if we do so then there will be high chances that more collision will occur i.e. we will get same hash value when substring are not same
    {
        long hash = 0;
        for(int i = 0 ; i < len ; i++) hash += str.charAt(i) * pow(primeno, i);
        return hash;
    }

    public static long getHashRepeatedly(long strHashValue,  char oldChar, char newChar, int patternLength) // why do we use hashfunction along with prime no when we can simply use sum of ascii characters, becasue if we do so then there will be high chances that more collision will occur i.e. we will get same hash value when substring are not same
    {        
        strHashValue = strHashValue - oldChar; 
        strHashValue = (int)(strHashValue / primeno);
        strHashValue = strHashValue + newChar * (long)pow(primeno, patternLength - 1);
        return strHashValue;
    }

    public static int patternSearch(String str, String pattern)
    {
        int strLength = str.length();
        int patternLength = pattern.length();

        System.out.println("str : " + str + "    pattern : " + pattern);
        if(strLength >= patternLength)
        {
            long patternHashValue = getHash(pattern, patternLength);
            long strHashValue = getHash(str, patternLength); 
            System.out.println("PatternHashValue : " + patternHashValue + "\n");
            
            if(strHashValue == patternHashValue) return 0;
            System.out.println("strHashValue : " + strHashValue);
            for(int i = 1 ; i  < strLength - patternLength  + 1 ; i++)
            {
                strHashValue = getHashRepeatedly(strHashValue, str.charAt(i - 1), str.charAt(i + patternLength - 1), patternLength);
                System.out.println("strHashValue : " + strHashValue);
                if((patternHashValue == strHashValue) && (pattern.equals(str.substring(i, i + patternLength)))) return i; // 1-Based Indexing
          }
        }
        return -1;
    }

    public static void main(String... args) throws Exception
    {
        String str, pattern;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        /* out.print("Enter String... ");
        s = br.readLine();
        out.print("Enter pattern... ");
        pattern = br.readLine(); */

        
       /* str = "AABAACAADAABAABA";
        pattern = "DAAB";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
        
        
        */str = "TusharRoy";
        /*pattern = "Tus";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
        
        pattern = "usha";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
        */
        pattern = "sharRoy";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
       /* 
        pattern = "Roy";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
        
        pattern = "shas";
        System.out.println("Index " + patternSearch(str, pattern));
        System.out.println("################################################");
        */
        br.close();
    }
}