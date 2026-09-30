class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        vector<vector<char>> solution(boxGrid[0].size(), vector<char>(boxGrid.size(), '.'));

        int rows = boxGrid.size();
        int cols = boxGrid[0].size();
        
                // First rotate the matrix as is
        for(int i = 0; i<rows; i++){                        // ← rows
            for(int j = 0; j<cols; j++){                    // ← cols
                solution[j][rows -1 -i] = boxGrid[i][j];
            }
        }

        // Apply gravity by column
        rows = solution.size();
        cols = solution[0].size();                          // ← sin -1

        for(int c = 0; c < cols; c++){
            int prev_blocker_pos = -1;                      // ←
            int blocker_pos = -1;                           // ←
            int stones = 0;
            for(int r = 0; r <= rows; r++){                 // ← <= para cerrar el último tramo
                if(r == rows || solution[r][c] == '*'){     // ← el fondo cuenta como obstáculo
                    prev_blocker_pos = blocker_pos;
                    blocker_pos = r;

                    for(int k = blocker_pos - 1; k > prev_blocker_pos; k--){   // ← -1
                        if(stones > 0){
                            solution[k][c] = '#';
                            stones--;
                        } else {
                            solution[k][c] = '.';
                        }
                    }
                } else if(solution[r][c] == '#'){
                    stones++;
                }
            }
        }
        
        return solution;
    }
};