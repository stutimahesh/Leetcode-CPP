class Solution {
public:
    int gcd(int a, int b){
        int mini=min(a,b);
        int maxi=max(a,b);
        while(mini){
            int tmp=maxi%mini;
            maxi=mini;
            mini=tmp;
        }
        return maxi;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefixGcd(n,0);
        int mx=0;
        for(int i=0;i<n;i++){
            if(nums[i]>mx) mx=nums[i];
            prefixGcd[i]=gcd(nums[i],mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        int m=(int)n/2;
        // vector<int> pairedGcd(m,0);
        // for(int i=0;i<m;i++){
        //     pairedGcd[i]=gcd(prefixGcd[i], prefixGcd[n-i-1]);
        // }
        // long long result=0;
        // for(int i:pairedGcd){
        //     result+=i;
        // }
        
        long long result=0;
        for(int i=0;i<m;i++){
            result+=gcd(prefixGcd[i],prefixGcd[n-i-1]);
        }

        return result;

    }

};