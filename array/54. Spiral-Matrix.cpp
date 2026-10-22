class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       
        int m = matrix.size();
        int n = matrix[0].size();
        int i=0;
        int j=0;

        vector<int> result(m*n);
        int idx=0;

        while(i<m && j<n){
            for(int k=j ; k<n ; k++){
                result[idx++]= matrix[i][k];
            }

            for(int k=i; k<m; k++){
                result[idx++]= matrix[k][n-j];
            }

            if (i < m) {
                for (int k = n - 1; k >= j; k--) {
                    result[idx++] = matrix[m][k];
                }
            }

            if (j < n) {
                for (int k = n - 1; k > j; k--) {
                    result[idx++] = matrix[k][j];
                }
            }

            i++;j++;
            m--;n--;
        }
        return result;
    }

};