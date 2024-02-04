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

}