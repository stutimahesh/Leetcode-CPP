class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int first=INT_MIN;
        int second=INT_MIN;
        int index=-1;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]>first){
                second=first;
                first=nums[i];
                index=i;
            }else if(nums[i]>second && nums[i]!=first){
                second=nums[i];
            }
        }
        if(second*2<=first) return index;
        return -1;
    }
};