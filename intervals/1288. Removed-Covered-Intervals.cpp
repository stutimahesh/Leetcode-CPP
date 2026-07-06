class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), 
            [](vector<int>&a, vector<int>&b){
                if(a[0]==b[0]){
                    return a[1]>b[1];
                }
                return a[0]<b[0];
            });

        vector<vector<int>> arr;
        arr.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][1]>arr.back()[1] && intervals[i][0]!=arr.back()[0]){
                arr.push_back(intervals[i]);
            }
        }
        return arr.size();
    }
};