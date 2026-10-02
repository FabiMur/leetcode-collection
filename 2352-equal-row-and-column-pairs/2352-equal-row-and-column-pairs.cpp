class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>, int> rowCount;
        for (const auto& row : grid) rowCount[row]++;

        int solution = 0;
        for (int col = 0; col < n; col++) {
            vector<int> tmp(n);
            for (int row = 0; row < n; row++) tmp[row] = grid[row][col];
            auto it = rowCount.find(tmp);
            if (it != rowCount.end()) solution += it->second;
        }
        return solution;
    }
};