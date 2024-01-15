// You are given an integer array matches where matches[i] = [winneri, loseri] indicates that the player winneri defeated player loseri in a match.

// Return a list answer of size 2 where:

// answer[0] is a list of all players that have not lost any matches.
// answer[1] is a list of all players that have lost exactly one match.
// The values in the two lists should be returned in increasing order.

// Note:

// You should only consider the players that have played at least one match.
// The testcases will be generated such that no two matches will have the same outcome.
 

// Example 1:

// Input: matches = [[1,3],[2,3],[3,6],[5,6],[5,7],[4,5],[4,8],[4,9],[10,4],[10,9]]
// Output: [[1,2,10],[4,5,7,8]]
// Explanation:
// Players 1, 2, and 10 have not lost any matches.
// Players 4, 5, 7, and 8 each have lost one match.
// Players 3, 6, and 9 each have lost two matches.
// Thus, answer[0] = [1,2,10] and answer[1] = [4,5,7,8].
// Example 2:

// Input: matches = [[2,3],[1,3],[5,4],[6,4]]
// Output: [[1,2,5,6],[]]
// Explanation:
// Players 1, 2, 5, and 6 have not lost any matches.
// Players 3 and 4 each have lost two matches.
// Thus, answer[0] = [1,2,5,6] and answer[1] = [].
 

// Constraints:

// 1 <= matches.length <= 105
// matches[i].length == 2
// 1 <= winneri, loseri <= 105
// winneri != loseri
// All matches[i] are unique.

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>zero;
        unordered_map<int,int>one;
        vector<vector<int>>ans;
        vector<int>temp1;
        vector<int>temp2;
      
        for(int i=0;i<matches.size();i++){
           
            zero[matches[i][0]]++;
            one[matches[i][1]]++;

        }
        for(auto x:zero){
            if(one[x.first]==0){
                temp1.push_back(x.first);
            }
        }
        for(auto x:one){
            if(x.second==1){
                temp2.push_back(x.first);
            }
        }
        sort(temp1.begin(),temp1.end());
        sort(temp2.begin(),temp2.end());
        ans.push_back(temp1);
        ans.push_back(temp2);
        return ans;
    }
    
};

//Approach 2
class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        int losses[100001];
        for(int i = 1; i <= 100000; i++){
            losses[i] = -1;
        }

        int biggestPlayerNum = 0;
        for(int i = 0; i < matches.size(); i++){
            if(losses[matches[i][0]] == -1) losses[matches[i][0]] = 0;
            if(losses[matches[i][1]] == -1) losses[matches[i][1]] = 0;

            losses[matches[i][1]]++;

            biggestPlayerNum = max(biggestPlayerNum, matches[i][0]);
            biggestPlayerNum = max(biggestPlayerNum, matches[i][1]);
        }
        
        vector<vector<int>> ans(2);
        for(int i = 1; i <= biggestPlayerNum; i++){
            if(losses[i] == 0) ans[0].push_back(i);
            else if(losses[i] == 1) ans[1].push_back(i);
        }

        return ans;
    }
};

//Approach 3

#include <vector>
#include <unordered_map>
#include <set>

class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        // Create unordered maps to store wins and losses for each player
        unordered_map<int, int> wins, losses;

        // Iterate through the matches to update wins and losses
        for (const auto& match : matches) {
            wins[match[0]]++;
            losses[match[1]]++;
        }

        // Create sets to store players with 0 losses and 1 loss
        set<int> noLoss, oneLoss;

        // Iterate through wins map to find players with 0 losses
        for (const auto& entry : wins) {
            if (entry.second > 0 && losses[entry.first] == 0) {
                noLoss.insert(entry.first);
            }
        }

        // Iterate through losses map to find players with 1 loss
        for (const auto& entry : losses) {
            if (entry.second == 1) {
                oneLoss.insert(entry.first);
            }
        }

        // Construct the result vector
        vector<vector<int>> result = {vector<int>(noLoss.begin(), noLoss.end()),
                                      vector<int>(oneLoss.begin(), oneLoss.end())};

        return result;
    }
};
