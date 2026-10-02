class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();

        int digSum = 0;

        for (int i = 0; i < n; i++) {
                    
            digSum += mat[i][i];
            if(i != n-i-1){
            digSum += mat[i][n-i-1];
            }
    
        }

        return digSum;
    }
};