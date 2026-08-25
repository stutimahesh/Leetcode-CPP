class Solution{
public:
    int missingMultiple(vector<int>& nums,int k){
        vector<int> mp(102,0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                mp[nums[i]/k]++;
            }
        }
        for(int i=1;i<102;i++){
            if(mp[i]==0){
                return i*k;
            }
        }
        return 0;
    }
}