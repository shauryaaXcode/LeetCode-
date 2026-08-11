class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int hash[256];
        // Initially sabko -1
        for (int i = 0; i < 256; i++) {
            hash[i] = -1;
        }
        int l = 0;
        int r = 0;
        int maxLen = 0;
        while (r < n) {
            // Agar character pehle aa chuka hai
            if (hash[s[r]] != -1) {
                // Duplicate current window ke andar hai
                if (hash[s[r]] >= l) {
                    l = hash[s[r]] + 1;
                }
            }
            // Current character ka latest index store karo
            hash[s[r]] = r;
            // Maximum length update karo
            maxLen = max(maxLen, r - l + 1);
            r++;
        }
        return maxLen;
    }
};