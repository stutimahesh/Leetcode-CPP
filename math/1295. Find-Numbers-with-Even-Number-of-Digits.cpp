class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int num: nums){

            int n=0;
            while(num){
                n++;
                num=num/10;
            }

            if(n%2==0) count++;
        }
        return count;
    }
};