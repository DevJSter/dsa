// 140. Word Break II
// Solved
// Hard
// Topics
// Companies
// Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order.

// Note that the same word in the dictionary may be reused multiple times in the segmentation.

 

// Example 1:

// Input: s = "catsanddog", wordDict = ["cat","cats","and","sand","dog"]
// Output: ["cats and dog","cat sand dog"]
// Example 2:

// Input: s = "pineapplepenapple", wordDict = ["apple","pen","applepen","pine","pineapple"]
// Output: ["pine apple pen apple","pineapple pen apple","pine applepen apple"]
// Explanation: Note that you are allowed to reuse a dictionary word.
// Example 3:

// Input: s = "catsandog", wordDict = ["cats","dog","sand","and","cat"]
// Output: []
 

// Constraints:

// 1 <= s.length <= 20
// 1 <= wordDict.length <= 1000
// 1 <= wordDict[i].length <= 10
// s and wordDict[i] consist of only lowercase English letters.
// All the strings of wordDict are unique.
// Input is generated in a way that the length of the answer doesn't exceed 105.

class Solution {
public:

    vector<string> ans;

    void solve(int i, string &sentence, string &givenString, unordered_map<string, bool> &doesExist) {
        if (i >= givenString.size()) {
            ans.push_back(sentence);
            return;
        }

        for (int j = i + 1; j <= i + 10  &&  j <= givenString.size(); j++) {
            string word = givenString.substr(i, j - i);
            if (doesExist.find(word) != doesExist.end()) {
                if (sentence.size() == 0) {
                    sentence = word;
                } else {
                    sentence += " " + word;
                }
                solve(j, sentence, givenString, doesExist);
                int x = 0;
                while (x < word.size()) {
                    x++;
                    sentence.pop_back();
                }

                if (sentence.size() > 0) {
                    sentence.pop_back();
                }
            }
        }
    }

    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string sentence = "";
        unordered_map<string, bool> doesExist;
        for (auto x: wordDict) {
            doesExist[x] = true;
        }

        ans.clear();
        solve(0, sentence, s, doesExist);
        return ans;
    }
};