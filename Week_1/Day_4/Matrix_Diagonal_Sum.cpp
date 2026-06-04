class Solution {
    public:
        int diagonalSum(vector<vector<int>>& mat) {
            int size = mat.size();
            int sum = 0;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == j) {
                        sum += mat[i][j];
                    }
                }
            }
            for (int i = 0; i < size; i++) {
                for (int j = size - 1; j >= 0; j--) {
                    if (i + j == size - 1 && i!=j) {
                      
                            sum += mat[i][j];
                        
                    }
                }
            }
            return sum;
        }
    };