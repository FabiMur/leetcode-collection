class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>> solution(boxGrid[0].size(), vector<char>(boxGrid.size(), '.'));

        // First rotate the matrix as is
        for(int i = 0; i<boxGrid.size(); i++){
            for(int j = 0; j<boxGrid[0].size(); j++){                     // ← [0]
                solution[j][boxGrid.size() - 1 - i] = boxGrid[i][j];      // ← rotación
            }
        }

        // Iterate over each column downward
        for(int i = 0; i < solution[0].size(); i++){
            int start = 0;                                                // ←
            while(start < solution.size()){                               // ←
                int blocker_pos = solution.size();                        // ← antes INT_MAX
                int stones = 0;
                for(int j = start; j < solution.size(); j++){             // ← start
                    if(solution[j][i] == '*'){
                        blocker_pos = j;
                        break;
                    } else if(solution[j][i] == '#'){
                        stones++;
                    }
                }

                for(int j = blocker_pos - 1; j >= start; j--){            // ← sin min, hasta start
                    if(stones > 0){
                        solution[j][i] = '#';
                        stones--;                                         // ←
                    } else{
                        solution[j][i] = '.';
                    }
                }
                start = blocker_pos + 1;                                  // ←
            }
        }

        return solution;
    }
};