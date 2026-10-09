class Solution {
public:
    int minInsertions(string s) {
        int intersections=0;
        int need=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(need%2 == 1){
                    intersections++;
                    need--;
                }
                need+=2;
            }else{
                need--;
                if(need<0){
                    intersections++;
                    need=1;
                }
            }
        }
        return intersections+need;
    }
};