//1207.Unique number of Occurence
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

 

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
// Example 2:

// Input: arr = [1,2]
// Output: false
// Example 3:

// Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
// Output: true
 

// Constraints:

// 1 <= arr.length <= 1000
// -1000 <= arr[i] <= 1000

#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <iostream>
using namespace std;

int main(){
 class Solution {
public:
    bool uniqueOccurrences(std::vector<int>& arr) {
        std::unordered_map<int, int> occurrences;
        std::unordered_set<int> uniqueCounts;

        // Count occurrences of each value in the array
        for (int num : arr) {
            occurrences[num]++;
        }

        // Check for unique occurrences
        for (const auto& entry : occurrences) {
            int count = entry.second;
            if (uniqueCounts.count(count) > 0) {
                return false; // Non-unique count found
            }
            uniqueCounts.insert(count);
        }

        return true; // All counts are unique
    }
};

#include <iostream>

int main() {
    Solution solution;
    std::vector<int> arr1 = {1, 2, 2, 1, 1, 3};
    std::vector<int> arr2 = {1, 2};
    std::vector<int> arr3 = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

    std::cout << std::boolalpha << solution.uniqueOccurrences(arr1) << std::endl; // Output: true
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr2) << std::endl; // Output: false
    std::cout << std::boolalpha << solution.uniqueOccurrences(arr3) << std::endl; // Output: true

    return 0;
}

}