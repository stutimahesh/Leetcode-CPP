class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        while(left<=right){
            int num=left;
            bool add=true;
            while(num>0){
                int elem=num%10;
                if(elem==0 || left%elem!=0){
                    add=false;
                    break;
                }
                num=num/10;
            }
            if(add) result.push_back(left);
            left++;
        }
        return result;
    }
};