class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> table(101,0);
        int mini=101;
        int maxi=0;
        vector<int> result;
        for(int num:nums){
            table[num]=1;
            if(num>maxi) maxi=num;
            if(num<mini) mini=num;
        }
        while(mini<maxi){
            if(table[mini]==0){
                result.push_back(mini);
            }
            mini++;
        }
        return result;
    }
};