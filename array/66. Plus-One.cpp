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

//Time complexity: O(n) where n is the number of digits in the input array

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();

        for(int i= n-1; i>=0; i--){
            if( digits[i] == 9){
                digits[i]=0;
            }else{
                digits[i]++;
                return digits;
            }
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};