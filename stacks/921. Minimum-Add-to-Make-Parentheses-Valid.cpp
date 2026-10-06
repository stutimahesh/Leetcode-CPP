class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> stk;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') stk.push('(');
            else{
                if(!stk.empty()){
                    stk.pop();
                }
                else count++;
            }
        }
        return count+stk.size();
    }
};
