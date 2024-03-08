// 349. Intersection of Two Arrays
// Easy

// 5858

// 2278

// Add to List

// Share
// Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 

// Example 1:

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]
// Example 2:

// Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
// Output: [9,4]
// Explanation: [4,9] is also accepted.
 

// Constraints:

// 1 <= nums1.length, nums2.length <= 1000
// 0 <= nums1[i], nums2[i] <= 1000

class Solution {
public:
    

    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(begin(nums1), end(nums1));
        sort(begin(nums2), end(nums2));
        
        int m = nums1.size();
        int n = nums2.size();
        
        vector<int> result;
        int i = 0, j = 0;
        
        while(i < m && j < n) {

            if(nums1[i] == nums2[j]) {
                result.push_back(nums1[i]);
                
                while(i < m-1 && nums1[i] == nums1[i+1]) {
                    i++;
                }
                while(j < n-1 && nums2[j] == nums2[j+1]) {
                    j++;
                }
                i++;
                j++;
                
            } else if(nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        return result;
        
    }
};
