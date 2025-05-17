class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> duplicate = matrix;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                
                if (matrix[i][j] == 0) {
                    for (int ind = 0; ind < m; ind++) {
                        duplicate[i][ind] = 0;
                    }
                    for (int index = 0; index < n; index++) {
                        duplicate[index][j] = 0;
                    }
                     
                     
                }
            }
        }

        matrix = duplicate;
    }
};
