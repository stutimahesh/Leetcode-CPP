class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int num:nums){
            s.insert(num);
        }
        if(s.size() < nums.size()){
            return true;
        }
        return false;
    }
};

//Solution 2: sorting and then linear scan 
//Time complexity remains same: O(n log n)
//Space complexity: reduces from O(n)-for set to O(n) for sorting in place 

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if( nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};