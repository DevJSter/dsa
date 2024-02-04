// Partition Array for Maximum Sum

public class Solution {
 public int maxSumAfterPartitioning(int[] arr, int k) {
     int n = arr.length;
     int[] t = new int[n + 1];

     for (int i = 1; i <= n; i++) {
         int currMax = -1;

         for (int j = 1; j <= k && i - j >= 0; j++) {
             currMax = Math.max(currMax, arr[i - j]);
             t[i] = Math.max(t[i], t[i - j] + currMax * j);
         }
     }

     return t[n];
 }

 public static void main(String[] args) {
     Solution solution = new Solution();
     int[] arr = {1, 4, 1, 5, 7, 3, 6, 1, 9};
     int k = 3;
     int result = solution.maxSumAfterPartitioning(arr, k);
     System.out.println("Maximum Sum after Partitioning: " + result);
 }
}

