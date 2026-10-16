class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int j=n-1;
        int count=0;

        for(int i=0; i<j; i++){
            if(nums[i]==0){
                while(j>i && nums[j]==0){
                    j--;
                }
                if(i<j){
                    swap(nums[i],nums[j]);
                    j--;
                    count++;
                }
            }
        }
        return count;
        
    }
};