class Solution {
public:
    bool isVowel(char ch){
        char c= tolower(ch);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseVowels(string s) {
        
        int n=s.size();
        int i=0,j=n-1;
        while(i<j){
            bool c1=isVowel(s[i]);
            bool c2=isVowel(s[j]);
            if(c1 && c2){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(c1) { j--; }
            else { i++; };
        }

        return s;
    }
};