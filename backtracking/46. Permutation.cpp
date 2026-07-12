class Solution{
    vector<vector<int>> output;

    void backtrack(vector<bool>& used, vector<int>&curr, vector<int>&nums){
        if(curr.size()==nums.size()) output.push_back(curr);

        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            curr.push_back(nums[i]);
            backtrack(used,curr,nums);
            curr.pop_back();
            used[i]=false;
        }
    }

    public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<int>curr;
        vector<int> used(nums.size(), 0);
        backtrack(used,curr,nums);
        return output;
    }
}