class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mini=1001;
        int maxi=0;
        for(int num:nums){
            if(mini>num) mini=num;
            if(maxi<num) maxi=num;
        }
        while(mini){
            int tmp=maxi%mini;
            maxi=mini;
            mini=tmp;
        }
        return maxi;
    }
};