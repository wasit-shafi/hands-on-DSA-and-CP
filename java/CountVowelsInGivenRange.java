/**
    @author wasitshafi
    @since  27-01-2020
*/
// for more info refer : https://www.geeksforgeeks.org/queries-to-find-the-count-of-vowels-in-the-substrings-of-the-given-string/
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class CountVowelsInGivenRange
{
    public static void main(String... args) throws Exception
    {
        String s;
        int l, r, len, prefixSum[];
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        System.out.print("Enter String... ");
        s = br.readLine();
        len = s.length();
        prefixSum = new int[len];

        if(s.charAt(0) == 'a' || s.charAt(0) == 'e' || s.charAt(0) == 'i' || s.charAt(0) == 'o' || s.charAt(0) == 'u') // assume string is not empty
            prefixSum[0]  = 1;
        else
            prefixSum[0]  = 0;

        for(int i = 1 ; i < len ; i++) // don't use "i < s.length()" as it will result in O(n^2) time complexity
        {
            if(s.charAt(i) == 'a' || s.charAt(i) == 'e' || s.charAt(i) == 'i' || s.charAt(i) == 'o' || s.charAt(i) == 'u')
                prefixSum[i]  = prefixSum[i - 1] + 1;
            else
                prefixSum[i] = prefixSum[i - 1];
        }

        System.out.print("Enter left Index [0 <= L < " + len + "] : ");
        l = Integer.parseInt(br.readLine());
        
        System.out.print("Enter right Index [" + l + " < L < " + len + "] : ");
        r = Integer.parseInt(br.readLine());

        System.out.print("Total Vowels : " + (prefixSum[r] - prefixSum[l - 1]));
    }
}