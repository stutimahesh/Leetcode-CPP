class Solution {
public:
    vector<string> result;

    void backtrack(string s, int idx){
        result.push_back(s);

        for(int i=idx;i<s.size();i++){
            if(isdigit(s[i])) continue;

            string tmp=s;
            if(islower(tmp[i])) tmp[i]=toupper(tmp[i]);
            else tmp[i]=tolower(tmp[i]);

            backtrack(tmp,i+1);
        }       
    }

    vector<string> letterCasePermutation(string s) {
       backtrack(s,0);
       return result;
    }
};