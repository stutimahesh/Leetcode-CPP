class Solution:
public:
    int maximumLengthSubstring(string s){

        vector<int> count(26,0);
        int i=0,m=0;
        int maximum=0;

        for(int j=0;j<s.size();j++){
            while(count[s[j]-'a']>=2){
                count[s[i]-'a']--;
                i++;
                m--;
            }
            count[s[j]-'a']++;
            m++;

            maximum=max(maximum,m);
        }
        return maximum;
    }