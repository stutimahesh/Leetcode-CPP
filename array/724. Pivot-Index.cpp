class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return -1;
        if (n==1) return 0;

        vector<int> prefix(n,0),suffix(n,0);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for (int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
            suffix[n-i-1]=suffix[n-i]+nums[n-i-1];
        }
        for (int i=0;i<n;i++){
            int p= i>0 ? prefix[i-1] : 0;
            int s= i<n-1 ? suffix[i+1] : 0;
            if (p==s){
                return i;
            }
        }
        return -1;
    }
};