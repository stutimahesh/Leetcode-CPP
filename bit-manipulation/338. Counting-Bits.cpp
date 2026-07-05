class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);
        ans[0]=0;
        int offset=1;
        int i=1;
        while(i<=n){
            if(offset*2==i){
                offset=i;
            }
            ans[i]=1+ans[i-offset];
            i++;
        }
        return ans;
    }
};