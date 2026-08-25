class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int minimum=min(m,n);
        string result="";
        for(int i=0;i<minimum;i++){
            result+=word1[i];
            result+=word2[i];
        }
        int w=minimum;
        while(w<m){
            result+=word1[w++];
        } w=minimum;
        while(w<n){
            result+=word2[w++];
        }

        return result;
    }
};