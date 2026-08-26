class Solution{
public:
    string gcdOfStrings(string str1, string str2){

        if(str1+str2 != str2+str1) return "";

        int m=max(str1.size(),str2.size());
        int n=min(str1.size(),str2.size());
        int l=n;
        while( m%l!=0 && n%l!=0){
            l--;
        }

        return str1.substr(0,l);
    }
}