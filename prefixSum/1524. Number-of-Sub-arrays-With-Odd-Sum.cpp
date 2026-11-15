class Solution {
public:
const int MOD= 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        long long even =1;
        long long odd= 0;

        long long result=0;
        int sum=0;

        for(int num: arr){
            sum+= num;
            if(sum%2==0){
                result+=odd;
                even++;
            }else{
                result+=even;
                odd++;
            }
            result = result%MOD;
        }
        return result;
    }
};