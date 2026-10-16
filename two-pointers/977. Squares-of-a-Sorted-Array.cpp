class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n,0);
        int i=n-1,
            j=0,
            k=n-1;
        
        while(j<=i && k>=0){
            if(abs(nums[i])> abs(nums[j])){
                result[k--]=(nums[i]*nums[i]);
                i--;
            }else{
                result[k--]=(nums[j]*nums[j]);
                j++;
            }
        }

        return result;
    }
};