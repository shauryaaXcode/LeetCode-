class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;
        while (s < e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] < nums[e]) {
                e = mid;
            } else {
                s = mid + 1;
            }
        }
        return e;
    }
    int binarySearch(int s, int e, vector<int>& nums, int target) {
        int idx = -1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                idx = mid;
                break;
            } else if (nums[mid] < target) {
                s = mid + 1;
            } else
                e = mid - 1;
        }
        return idx;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = pivotIndex(nums);
        int idx = binarySearch(0, pivot - 1, nums, target);
        if (idx != -1)
            return idx;
        idx = binarySearch(pivot, n - 1, nums, target);
        return idx;
    }
};