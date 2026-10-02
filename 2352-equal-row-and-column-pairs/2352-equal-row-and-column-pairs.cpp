class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n = grid.size();
        map<vector<int>, int> freq;
        int count = 0;
        
        for(auto row: grid){
            freq[row] += 1;
        }

        for(int col = 0; col < grid.size(); col++){
            vector<int> temp;
            temp.reserve(grid.size());
            for(int row = 0; row < grid.size(); row++){
                temp.push_back(grid[row][col]);
            }

            if(freq.find(temp) != freq.end()){
                count += freq[temp];
            }
        }

        return count;
    }
};