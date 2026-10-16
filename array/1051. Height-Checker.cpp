class Solution {
public:
    int heightChecker(vector<int>& heights) {
        priority_queue<int, vector<int>, greater<int>> expected;
        for(int height: heights){
            expected.push(height);
        }
        int unmatched=0;
        for(int height: heights){
            int expect=expected.top();
            expected.pop();
            if(expect!=height) unmatched++;
        }
        return unmatched;
    }
};

//Sorting solution
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected= heights;
        sort(expected.begin(), expected.end());
        int count=0;
        for(int i=0; i<heights.size(); i++){
            if(expected[i]!=heights[i]){
                count++;
            }
        }
        return count;
    }
};