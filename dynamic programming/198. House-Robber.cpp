class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,0);

        for(int i=0; i<n ;i++){
            int prev0= i==0? 0: dp[i-1];
            int prev1= i<2? 0: dp[i-2];

            dp[i]= max(prev0, prev1+nums[i]);
        }

        return dp[n-1];
    }
};