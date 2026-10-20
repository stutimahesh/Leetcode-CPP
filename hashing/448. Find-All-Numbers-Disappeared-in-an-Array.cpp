class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> mp(n+1,0);
        vector<int> result;
        for(int num: nums){
            mp[num]=1;
        }
        for(int i=1; i<=n; i++){
            if(mp[i]==0) result.push_back(i);
        }

        return result;
    }
};