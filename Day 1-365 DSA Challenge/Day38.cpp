647. Palindromic Substrings
Medium

10446

225

Add to List

Share
Given a string s, return the number of palindromic substrings in it.

A string is a palindrome when it reads the same backward as forward.

A substring is a contiguous sequence of characters within the string.

 

Example 1:

Input: s = "abc"
Output: 3
Explanation: Three palindromic strings: "a", "b", "c".
Example 2:

Input: s = "aaa"
Output: 6
Explanation: Six palindromic strings: "a", "a", "a", "aa", "aa", "aaa".
 

Constraints:

1 <= s.length <= 1000
s consists of lowercase English letters.



  class Solution {
  public:
      int count = 0;
      void check(string& s, int i, int j, int n) {

          while(i >= 0 && j < n && s[i] == s[j]) {
              count++;
              i--; //expanding from center
              j++; //expanding from center
          }
      }
      int countSubstrings(string s) {
          int n = s.length();
          count = 0;

          /*

      Every single character in the string is a center for possible odd-length palindromes: check(s, i, i);
      Every pair of consecutive characters in the string is a center for possible even-length palindromes: check(s, i, i+1);.

          */
          for(int i = 0; i<n; i++) {
              check(s, i, i, n);
              check(s, i, i+1, n);
          }
          return count;
      }
  };

