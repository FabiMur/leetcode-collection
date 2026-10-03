class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int maxSum = INT_MIN;
        int currentSum = 0;

        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            currentSum += nums[right];
            if(right - left + 1 > k){
                currentSum -= nums[left];
                left++;
            }

            if(right-left+1 == k){
                maxSum = max(maxSum, currentSum);
            }
        }

        return (double)maxSum/k;
    }
};