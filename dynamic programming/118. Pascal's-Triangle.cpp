class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        output.push_back({1});
        vector<int> prev={1};

        for(int i=1;i<numRows;i++){
            vector<int>row;

            for(int j=0;j<=i;j++){
                int left= (j-1>=0) ? prev[j-1] :0;
                int right= (j<prev.size()) ? prev[j] :0;
                row.push_back(left+right);
            }

            prev=row;
            output.push_back(row);
        }
        return output;
    }
};