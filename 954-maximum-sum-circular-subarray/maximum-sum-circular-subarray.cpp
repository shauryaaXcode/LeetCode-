class Solution {
public:
    int kadaneMax(vector<int>& nums) {
        int currSum = nums[0];
        int maxi = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxi = max(maxi, currSum);
        }
        return maxi;
    }
    int kadaneMin(vector<int>& nums) {
        int currSum = nums[0];
        int mini = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            currSum = min(nums[i], currSum + nums[i]);
            mini = min(mini, currSum);
        }
        return mini;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int minSum = kadaneMin(nums);
        int maxSum = kadaneMax(nums);
        int circular = sum - minSum;
        if (maxSum > 0) {
            return max(maxSum, circular);
        }
        return maxSum;
    }
};