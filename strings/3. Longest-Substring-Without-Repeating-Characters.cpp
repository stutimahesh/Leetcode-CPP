 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;

        int i=0,max_count=0;
        for(int j=0;j<s.size(); j++){
            if(mp.find(s[j])!=mp.end()){
                i=max(i,mp[s[j]]+1);
            }
            mp[s[j]]=j;
            max_count=max(max_count, j-i+1);
        }
        return max_count;
    }
};