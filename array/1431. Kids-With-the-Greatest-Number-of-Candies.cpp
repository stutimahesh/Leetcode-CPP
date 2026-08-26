class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maximum=0;
        for(int candy:candies){
            if(candy>maximum){
                maximum=candy;
            }
        }

        int s=candies.size();
        vector<bool> result(s,false);
        for(int i=0;i<s;i++){
            int added=candies[i]+extraCandies;
            if(added>=maximum){
                result[i]=true;
            }
        }

        return result;
    }
};