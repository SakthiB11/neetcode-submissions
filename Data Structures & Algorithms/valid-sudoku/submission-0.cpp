class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> row(9);
        vector<unordered_set<int>> col(9);
        vector<unordered_set<int>> sq(9);

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }else{
                    int n = board[i][j] - '0';
                    int square = (i/3) * 3 + (j/3);
                    if(row[i].contains(n) || col[j].contains(n) || sq[square].contains(n))
                    {
                        return false;
                    }else{
                        row[i].insert(n);
                        col[j].insert(n);
                        sq[square].insert(n);
                    }
                }
            }
        }
    return true;
    }
};
