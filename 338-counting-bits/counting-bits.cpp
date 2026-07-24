class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result(n + 1);
        if (n == 0) {
            result[0] = 0;
            return result;
        }
        for (int i = 1; i < n + 1; i++) {
            if (i % 2 != 0) {
                result[i] = result[i / 2] + 1;
            } else {
                result[i] = result[i / 2];
            }
        }
        return result;
    }
};