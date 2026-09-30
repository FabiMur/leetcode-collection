class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, zeros = 0, best = 0;
        for (int right = 0; right < (int)nums.size(); right++) {
            if (nums[right] == 0) zeros++;          // 1. meter el elemento
            while (zeros > k) {                     // 2. encoger mientras no sea válida
                if (nums[left] == 0) zeros--;
                left++;
            }
            best = max(best, right - left + 1);     // 3. medir
        }
        return best;

    }
};