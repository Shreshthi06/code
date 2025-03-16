class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        for (int i = 0; i < s.length(); i++) {
            for (int j = i; j < s.length(); j++) {
               
                bool found = false;
                for (int k = i; k < j; k++) {
                    if (s[k] == s[j]) {
                        found = true;
                        break;
                    }
                }
                if (found) break; 
                count = max(count, j - i + 1);
            }
        }
        return count;
    }
};
