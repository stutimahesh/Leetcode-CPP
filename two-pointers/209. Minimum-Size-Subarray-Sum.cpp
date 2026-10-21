class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum_val=0;
        int i=0;
        int minimum_idx= INT_MAX;

        for(int j=0; j<nums.size(); j++){
            sum_val+=nums[j];

            while(sum_val >= target){
                minimum_idx = min(minimum_idx, j-i+1);
                sum_val-=nums[i++];
            }
        }
        return minimum_idx == INT_MAX? 0: minimum_idx;
    }
};