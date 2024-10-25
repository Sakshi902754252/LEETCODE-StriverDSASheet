class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        //step 1: find transpose of matrix
        for(int i =0 ; i<row ;i++){
            for(int j = 0; j<=i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        //step 2: reverse every row of the matrix
        for(int i = 0; i<row; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
    }
};