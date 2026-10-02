class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int rows = mat.size();
        int column = mat[0].size();

        int digSum = 0;

        for (int i = 0; i < rows; i++) {

            for (int j = 0; j < column; j++) {

                if (i == j) {
                    digSum += mat[i][j];
                }
                else if (i + j == rows - 1) {
                    digSum += mat[i][j];
                }
            }
        }

        return digSum;
    }
};