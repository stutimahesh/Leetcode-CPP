class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maximum=0;
        for(int num: nums){
            if(num>maximum) maximum=num;
        }
        int result=0;
        for(int num:nums){
            result+= maximum-num;
        }

        return result;
    }
};