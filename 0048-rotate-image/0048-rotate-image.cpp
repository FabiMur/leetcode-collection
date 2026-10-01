class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while(top<bottom){
            for(int i = 0; i < right - left; i++){
                swap(matrix[top][left + i], matrix[bottom - i][left]);
                swap(matrix[bottom - i][left], matrix[bottom][right - i]);
                swap(matrix[bottom][right - i], matrix[top + i][right]);
            }
            top++;
            bottom--;
            left++;
            right--;
        }
    }
};