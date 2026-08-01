class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int result = 0;
        int cum = 0;
        mp.insert({0, 1});
        for (int i = 0; i < n; i++) {
            cum += nums[i];
            if (mp.find(cum - k) != mp.end()) {
                result += mp[cum - k];
            }
            mp[cum]++;
        }
        return result;
    }
};