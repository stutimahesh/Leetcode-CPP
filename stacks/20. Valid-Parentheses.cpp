class Solution {
public:
    unordered_map<char, char> mp={
        {'{','}'},
        {'[',']'},
        {'(',')'}
    };
    bool isValid(string s) {
        
        int n=s.size();
        if(n%2 != 0) return false;

        stack<char> stk;

        for(int i=0; i<n; i++){
            char ch=s[i];

            if(ch=='(' || ch=='{' || ch=='['){
                stk.push(ch);
            }else{
                if(!stk.empty() && mp[stk.top()]==ch){
                    stk.pop();
                }else {
                    return false;
                }
            }
        }
        return stk.empty();
    }
};