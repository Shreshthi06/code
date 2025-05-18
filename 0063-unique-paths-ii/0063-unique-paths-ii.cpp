class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();
        if (obstacleGrid[0][0] == 1)
            return 0;
        vector<vector<int>> temp(row, vector<int>(col, 0));
        temp[0][0] = 1;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (obstacleGrid[i][j] == 1) {
                    temp[i][j] = 0;
                } else {
                
                    if (i > 0)
                        temp[i][j] += temp[i - 1][j];
                    if (j > 0)
                        temp[i][j] += temp[i][j - 1];
                }
            }
        }

        return temp[row - 1][col - 1];
    }
};
