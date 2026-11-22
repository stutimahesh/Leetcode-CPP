class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n= strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];

        int minimum=strs[0].length();
        for (string str : strs) {
            minimum = min(minimum, (int)str.length()); 
        }

        for(int i=0; i<minimum; i++){
            char check= strs[0][i];
            for(int j=1; j<n; j++){
                if(strs[j][i]!=check){
                    return strs[0].substr(0,i);
                }
            }
        }

        return strs[0].substr(0, minimum);
    }
};