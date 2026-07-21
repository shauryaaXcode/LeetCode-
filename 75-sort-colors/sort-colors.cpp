class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0; // 0s kop handle karega
        int j = 0; // 1 ko handle karega
        int k = n - 1; // 2 ko hnadle karega
        while (j <= k) {
            if (nums[j] == 1) {
                j++;
            } else if (nums[j] == 2) {
                swap(nums[j], nums[k]);
                k--;
            } else {
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
        }
    }
};