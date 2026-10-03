class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int maxRow = mat.size() -1;
        int maxCol = mat[0].size() -1;
        vector<int> solution;

        int row = 0;
        int col = 0;
        bool up = true;

        while (row <= maxRow && col <= maxCol) {
            solution.push_back(mat[row][col]);
            if (up) {
                if (col == maxCol)      { row++; up = false; }
                else if (row == 0)      { col++; up = false; }
                else                    { row--; col++; }
            } else {
                if (row == maxRow)      { col++; up = true; }
                else if (col == 0)      { row++; up = true; }
                else                    { row++; col--; }
            }
        }
                return solution;
    }
};