class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        return helper(nums, target, 0, nums.size());
    }

    int helper(vector<int>& nums, int target, int left, int right) {
        if (left >= right)
            return left;

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;
        else if (target < nums[mid])
            return helper(nums, target, left, mid);
        else
            return helper(nums, target, mid + 1, right);
    }
};