class Solution {
public:
    bool checkString(string s) {
        bool b=false;
        for(int i=0; i<s.length(); i++){
            if(b){
                if(s[i]=='a'){
                    return false;
                }
            }
            b = b||(s[i]=='b');
        }
        return true;
    }
};