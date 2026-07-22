class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = 0;
        int n = nums.size();
        int e = n - 1;
        int ans = n;
        sort(nums.begin(), nums.end());
        while (s <= e) {
            int mid = (s + e) / 2;
            if (mid == nums[mid]) {
                s = mid + 1;
            } else {
                ans = mid;
                e = mid - 1;
            }
        }
        return ans;
    }
};