// 1609. Even Odd Tree
// Medium

// 1397

// 70

// Add to List

// Share
// A binary tree is named Even-Odd if it meets the following conditions:

// The root of the binary tree is at level index 0, its children are at level index 1, their children are at level index 2, etc.
// For every even-indexed level, all nodes at the level have odd integer values in strictly increasing order (from left to right).
// For every odd-indexed level, all nodes at the level have even integer values in strictly decreasing order (from left to right).
// Given the root of a binary tree, return true if the binary tree is Even-Odd, otherwise return false.

 

// Example 1:


// Input: root = [1,10,4,3,null,7,9,12,8,6,null,null,2]
// Output: true
// Explanation: The node values on each level are:
// Level 0: [1]
// Level 1: [10,4]
// Level 2: [3,7,9]
// Level 3: [12,8,6,2]
// Since levels 0 and 2 are all odd and increasing and levels 1 and 3 are all even and decreasing, the tree is Even-Odd.
// Example 2:


// Input: root = [5,4,2,3,3,7]
// Output: false
// Explanation: The node values on each level are:
// Level 0: [5]
// Level 1: [4,2]
// Level 2: [3,3,7]
// Node values in level 2 must be in strictly increasing order, so the tree is not Even-Odd.
// Example 3:


// Input: root = [5,9,1,3,5,7]
// Output: false
// Explanation: Node values in the level 1 should be even integers.
 

// Constraints:

// The number of nodes in the tree is in the range [1, 105].

//Approach-1 (When we deal with level, always first think of BFS)
//T.C : O(n)
//S.C : O(n)

#include <bits/stdc++.h>
#include <queue>
#include <climits>
#include <vector>
using namespace std;


class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> que;
        
        que.push(root);
        bool even_level = true;
        
        while(!que.empty()) {
            
            int n = que.size();
            int prev;
            if(even_level)
                prev = INT_MIN;
            else
                prev = INT_MAX;
            
            while(n--) {
                
                TreeNode* node = que.front();
                que.pop();
                
                if (even_level && (node->val % 2 == 0 || node->val <= prev)) {
                    return false;
                }
                if (!even_level && (node->val % 2 == 1 || node->val >= prev)) {
                    return false;
                }
                
 
                
                prev = node->val;
                if(node->left) {
                    que.push(node->left);
                }
                if(node->right) {
                    que.push(node->right);
                }
                
            }
            
            even_level = !even_level;
            
        }
        
        return true;
    }
};



//Approach-2 (DFS)
//T.C : O(n)
//S.C : Auxiliary Space O(n) + Recursion Space O(depth)
class Solution {
public:
    
    vector<int> levelPrev;
    
    bool solve(TreeNode* root, int level) {
        if(!root) {
            return true;
        }
        
        if((level%2 == 0 && root->val%2 == 0) || (level%2 != 0 && root->val%2 != 0)) {
            return false;
        }
        
        if(level >= levelPrev.size()) {
            levelPrev.resize(level+1);
        }

        if(levelPrev[level] != 0) { //already there is a value at this level
            if((level%2 == 0 && root->val <= levelPrev[level]) ||
               (level%2 != 0 && root->val >= levelPrev[level]))
                return false;
        }
        
        levelPrev[level] = root->val;
        
        return solve(root->left, level+1) && solve(root->right, level+1);
    }
    
    bool isEvenOddTree(TreeNode* root) {
        return solve(root, 0);
    }
};


