// Path Crossing
// Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.

// Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.

 

// Example 1:


// Input: path = "NES"
// Output: false 
// Explanation: Notice that the path doesn't cross any point more than once.
// Example 2:


// Input: path = "NESWW"
// Output: true
// Explanation: Notice that the path visits the origin twice.
 

// Constraints:

// 1 <= path.length <= 104
// path[i] is either 'N', 'S', 'E', or 'W'.
class Solution {
public:
    bool isPathCrossing(std::string path) {
        std::unordered_set<std::string> visited;
        visited.insert("0,0");
        
        int x = 0, y = 0;
        
        for (char move : path) {
            switch (move) {
                case 'N':
                    y++;
                    break;
                case 'S':
                    y--;
                    break;
                case 'E':
                    x++;
                    break;
                case 'W':
                    x--;
                    break;
            }
            
            std::string currentPos = std::to_string(x) + "," + std::to_string(y);
            
            if (visited.count(currentPos) > 0) {
                return true; 
            }
            
            visited.insert(currentPos);
        }
        
        return false; 
    }
};
