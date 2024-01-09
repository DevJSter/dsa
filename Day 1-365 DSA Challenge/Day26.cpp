// Consider all the leaves of a binary tree, from left to right order, the values of those leaves form a leaf value sequence.



// For example, in the given tree above, the leaf value sequence is (6, 7, 4, 9, 8).

// Two binary trees are considered leaf-similar if their leaf value sequence is the same.

// Return true if and only if the two given trees with head nodes root1 and root2 are leaf-similar.

 

// Example 1:


// Input: root1 = [3,5,1,6,2,9,8,null,null,7,4], root2 = [3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
// Output: true
// Example 2:


// Input: root1 = [1,2,3], root2 = [1,3,2]
// Output: false
 

// Constraints:

// The number of nodes in each tree will be in the range [1, 200].
// Both of the given trees will have values in the range [0, 200].

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafSequence1, leafSequence2;

        // Helper function to perform depth-first traversal and collect leaf values
        auto collectLeafValues = [&](TreeNode* root, vector<int>& leafSequence) {
            stack<TreeNode*> stk;
            TreeNode* current = root;

            while (current || !stk.empty()) {
                while (current) {
                    stk.push(current);
                    current = current->left;
                }

                current = stk.top();
                stk.pop();

                if (!current->left && !current->right) {
                    leafSequence.push_back(current->val);
                }

                current = current->right;
            }
        };

        // Collect leaf values for both trees
        collectLeafValues(root1, leafSequence1);
        collectLeafValues(root2, leafSequence2);

        // Compare the leaf value sequences
        return leafSequence1 == leafSequence2;
    }
};

int main() {
    // Example usage:
    TreeNode* root1 = new TreeNode(3, new TreeNode(5, new TreeNode(6), new TreeNode(2, new TreeNode(7), new TreeNode(4)))), new TreeNode(1, new TreeNode(9), new TreeNode(8)));
    TreeNode* root2 = new TreeNode(3, new TreeNode(5, new TreeNode(6), new TreeNode(7))), new TreeNode(1, new TreeNode(4), new TreeNode(2, new TreeNode(9), new TreeNode(8))));

    Solution solution;
    cout << boolalpha << solution.leafSimilar(root1, root2) << endl;

    // Remember to free the allocated memory to avoid memory leaks
    delete root1;
    delete root2;

    return 0;
}
