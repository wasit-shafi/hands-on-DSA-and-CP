import java.util.*;

public class SubsetTargetSum {
    static int arr[] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10
    };
    static long sum = 0L;
    static int count = 0;
    static int target = 8;
    static int N = arr.length;
    static ArrayList<Integer> subset = new ArrayList<>();

    static void print_subsets(ArrayList<Integer> subset, int k, long sum) {
      if (k < N) {
        print_subsets(subset, k + 1, sum);
        
        subset.add(arr[k]);
        sum += arr[k];
        if(sum == target) {
            System.out.println(subset);
            count++;
        }
        print_subsets(subset, k + 1, sum);
        
        subset.remove(subset.size() - 1);
        sum -= arr[k];
      }
    }

	public static void main(String args[]) {
      print_subsets(subset, 0, sum);
      System.out.println("Count : " + count);
	}
}