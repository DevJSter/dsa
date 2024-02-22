// 997. Find the Town Judge
// Easy

// 6297

// 540

// Add to List

// Share
// In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

// If the town judge exists, then:

// The town judge trusts nobody.
// Everybody (except for the town judge) trusts the town judge.
// There is exactly one person that satisfies properties 1 and 2.
// You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

// Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

 

// Example 1:

// Input: n = 2, trust = [[1,2]]
// Output: 2
// Example 2:

// Input: n = 3, trust = [[1,3],[2,3]]
// Output: 3
// Example 3:

// Input: n = 3, trust = [[1,3],[2,3],[3,1]]
// Output: -1
 

// Constraints:

// 1 <= n <= 1000
// 0 <= trust.length <= 104
// trust[i].length == 2
// All the pairs of trust are unique.
// ai != bi
// 1 <= ai, bi <= n

#include <vector>

class Solution {
public:
    int findJudge(int n, std::vector<std::vector<int>>& trust) {
        std::vector<int> inDegree(n + 1, 0);
        std::vector<int> outDegree(n + 1, 0);

        for (const auto& relation : trust) {
            // Decrease out-degree for the person who trusts someone
            outDegree[relation[0]]--;

            // Increase in-degree for the person being trusted
            inDegree[relation[1]]++;
        }

        for (int i = 1; i <= n; ++i) {
            // Check if the person has the required in-degree and out-degree
            if (inDegree[i] == n - 1 && outDegree[i] == 0) {
                return i;  // Found the town judge
            }
        }

        return -1;  // No town judge found
    }
};


int main() {
    Solution solution;

    // Example 1
    int n1 = 2;
    std::vector<std::vector<int>> trust1 = {{1, 2}};
    int result1 = solution.findJudge(n1, trust1);  // Output: 2

    // Example 2
    int n2 = 3;
    std::vector<std::vector<int>> trust2 = {{1, 3}, {2, 3}};
    int result2 = solution.findJudge(n2, trust2);  // Output: 3

    // Example 3
    int n3 = 3;
    std::vector<std::vector<int>> trust3 = {{1, 3}, {2, 3}, {3, 1}};
    int result3 = solution.findJudge(n3, trust3);  // Output: -1

    return 0;
}

