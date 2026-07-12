class Solution {
public:

    vector<vector<int>> output; 

    void backtrack(int start,int sum, vector<int>& curr, int target, vector<int>& candidates){
        if(sum==target) {
            output.push_back(curr);
            return;
        } 
        if(sum>target){
            return;
        }

        for(int i=start;i<candidates.size();i++){
            if (i>start && candidates[i]==candidates[i-1]) continue;
            curr.push_back(candidates[i]);
            sum+=candidates[i];
            backtrack(i+1, sum,curr,target,candidates);
            curr.pop_back();
            sum-=candidates[i];
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int>curr;
        backtrack(0,0,curr,target,candidates);
        return output;
    }
};