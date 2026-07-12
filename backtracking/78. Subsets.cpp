class Solution {
public:
    vector<vector<int>> output;
    
    void DFSandBacktracking(int start, vector<int>& curr, vector<int>& nums) {
        output.push_back(curr);
        
        for (int i = start; i < nums.size(); i++) {
            curr.push_back(nums[i]);
            DFSandBacktracking(i + 1, curr, nums);
            curr.pop_back();
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) { 
        vector<int> curr;
        DFSandBacktracking(0, curr, nums);
        return output;
    }
};