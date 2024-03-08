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
