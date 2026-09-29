class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        for(int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n;j++) // j = i +1 thus only doing the upper traingular elements (not doing this might undo the  transpose)
            {
                swap(matrix[i][j],matrix[j][i]); // Transposing the matrix
            }
        }

        for (int i = 0;i < n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};