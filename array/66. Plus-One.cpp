class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        digits[n-1]++;
        int s=n-1;
        while(s>=0 && digits[s]>9){
            digits[s]=0;
            s--;
            if(s>=0)digits[s]++;
        }
        if (s<0) digits.insert(digits.begin(), 1);
        return digits;
    }
};