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
//Both have time and space complexity: O(n) and O(1) respectively
//1st Approach swaps , but the second only counts the number of swaps

class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int zeros=0;
        for(int num: nums){
            if(num==0) zeros++;
        }
        int swap=0;
        for(int i=nums.size()-1; i>=0; i--){
            if(zeros>0 && nums[i]!=0) {
                swap++;
                zeros--;
            }else if(nums[i]==0) zeros--;
        }
        return swap;
    }
};