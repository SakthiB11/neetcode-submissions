class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int rows = 0;
        int col = n - 1;
        
        while (rows < m && col >= 0){
            if (matrix[rows][col] > target){
                col--;
            }else if(matrix[rows][col] < target){
                rows++;
            }else{
                return true;
            }
        }
        return false;
    }
};
