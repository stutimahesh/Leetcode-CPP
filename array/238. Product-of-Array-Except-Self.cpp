class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();

        vector<int> leftProd(n,1);
        vector<int> rightProd(n,1);

        for(int i=1;i<n;i++){
            leftProd[i]= leftProd[i-1]*nums[i-1];
            rightProd[n-i-1]=rightProd[n-i]*nums[n-i];
        }

        vector<int> result(n,1);
        for(int i=0;i<n;i++){
            result[i]=leftProd[i]*rightProd[i];
        }

        return result;
    }
};