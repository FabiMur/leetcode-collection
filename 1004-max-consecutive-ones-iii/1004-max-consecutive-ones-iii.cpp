class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int right = 0;
        int flips = 0;
        int solution = 0;
        int current = 0;

        for(right = 0; right < nums.size(); right++){
            if(nums[right] == 1){
                current++;
                solution = max(current, solution);
                continue;
            }

            if(k > flips){
                current++;
                flips++;
                solution = max(current, solution);
                continue;
            }

            for(int i = left; i <= right; i++){
                if(nums[i] == 1){
                    current--;
                } else{
                    current--;
                    flips--;
                    left = i + 1;
                    break;
                }
            }
            current++;
            flips++;

            solution = max(current, solution);

        }

        return solution;

    }
};