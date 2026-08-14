class Solution {
public:
    int firstOccurance(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                e = mid - 1;
            } else if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return ans;
    }
    int lastOccurance(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        int ans = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                ans = mid;
                s = mid + 1;
            } else if (nums[mid] > target)
                e = mid - 1;
            else
                s = mid + 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstOccurance(nums, target);
        int last = lastOccurance(nums, target);
        vector<int> temp;
        temp.push_back(first);
        temp.push_back(last);
        return temp;
    }
};