class Solution{
public:
    string reverseWords(string s){

        int n= s.size();
        string word="";
        s+=" ";

        vector<string> words;
        for(int i=0; i<=n; i++){
            if(s[i]== ' '){
                if(word.size()>0){
                    words.push_back(word);
                    word="";
                }
            }
            else{
                word+=s[i];
            }
        }
        string result="";
        for(int i=words.size()-1; i>=0; i--){
            result+=words[i];
            if(i>0){
                result+=" ";
            }
        }
        return result;
    }
}