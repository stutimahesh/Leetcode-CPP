class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {

        int max_increase=1, max_decrease=1;
        int increasing=1,decreasing=1;

        for(int i=1;i<nums.size();i++){
            if(nums[i] > nums[i-1]){
                increasing++;
            }else{
                increasing=1;
            }
            max_increase= max(max_increase, increasing);
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i] < nums[i-1]){
                decreasing++;
            }else {
                decreasing=1;
            }
            max_decrease= max(max_decrease, decreasing);
        }

        return max(max_increase, max_decrease);
    }
};