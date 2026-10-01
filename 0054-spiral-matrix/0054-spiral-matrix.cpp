class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> solution;
        int n = matrix.size() * matrix[0].size();
        solution.reserve(n);

        int left = 0;
        int top = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;

        while(solution.size() <  n){
            for(int i = left; i <= right; i++){
                solution.push_back(matrix[top][i]);
            }
            top++;

            for(int i = top; i <= bottom; i++){
                solution.push_back(matrix[i][right]);
            }
            right--;

            if (top <= bottom) {
                for(int i = right; i >= left; i--){
                    solution.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            if (left <= right) {
                for(int i = bottom; i >= top; i--){
                    solution.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return solution;

    }
};