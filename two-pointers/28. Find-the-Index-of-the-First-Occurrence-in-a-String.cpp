class Solution {
public:
    int strStr(string haystack, string needle) {
        int h= haystack.length();
        int n= needle.length();
        int i=0;
        for(int j=0; j<h; j++){
            if(haystack[j]==needle[i]){
                i++;
                if(i==n) return j-n+1;
            }else{
                j=j-i;
                i=0;
            }
        }
        return -1;
    }
};