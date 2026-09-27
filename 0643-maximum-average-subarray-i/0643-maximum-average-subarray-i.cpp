class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long cur = 0;
        for (int i = 0; i < k; i++) cur += nums[i];

        long best = cur;
        for (int right = k; right < (int)nums.size(); right++) {
            cur += nums[right] - nums[right - k];
            best = max(best, cur);
        }
        return (double)best / k;
    }
};