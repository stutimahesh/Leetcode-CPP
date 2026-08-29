class Solution {
public:
    int countWays(vector<vector<int>>& ranges) {
        sort(ranges.begin(), ranges.end());
        int count=1, max_end=ranges[0][1];

        for(auto range: ranges){
            if(range[0]>max_end){
                count++;
            }
            max_end=max(max_end, range[1]);
        }

        long long MOD= 1e9+7;
        long long result=1;
        for(int i=0;i<count;i++){
            result= (result*2) % MOD;
        }

        return result;
    }
};