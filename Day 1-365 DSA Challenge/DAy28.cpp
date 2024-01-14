














#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length()) {
            return false;
        }

        unordered_map<char, int> freq1, freq2;
        unordered_set<char> chars1, chars2;

        for (char c : word1) {
            freq1[c]++;
            chars1.insert(c);
        }

        for (char c : word2) {
            freq2[c]++;
            chars2.insert(c);
        }

        if (chars1 != chars2) {
            return false;
        }

        vector<int> freqCount1, freqCount2;

        for (auto& pair : freq1) {
            freqCount1.push_back(pair.second);
        }

        for (auto& pair : freq2) {
            freqCount2.push_back(pair.second);
        }

        sort(freqCount1.begin(), freqCount1.end());
        sort(freqCount2.begin(), freqCount2.end());

        return freqCount1 == freqCount2;
    }
};
