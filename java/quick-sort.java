// problem
// https://www.codechef.com/learn/course/searching-sorting/SORTSEARCH8/problems/SESO44

public static int partition(int[] arr, int low, int high) {
  int i = low - 1;
  int pivotElement = arr[high];
  int temp;

  for (int j = low; j < high; j++) {
    if (arr[j] <= pivotElement) {
      i++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }

  temp = arr[++i];
  arr[i] = arr[high];
  arr[high] = temp;
  return i;
}

public static void quickSort(int[] arr, int low, int high) {
  if (low < high) {
    int partitioningIndex = partition(arr, low, high);
    quickSort(arr, low, partitioningIndex - 1);
    quickSort(arr, partitioningIndex + 1, high);
  }
}