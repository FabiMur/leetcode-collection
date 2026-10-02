class Solution {
private:
    int digitSumF(int num){
        int sum = 0;
        while(num > 0){
            sum += num%10;
            num /= 10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, int> maxSum; // digit sum -> the biggest vector index value that sums that
        int maxDigitSum = -1;

        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int digitSum = digitSumF(n);
            if(maxSum.find(digitSum) != maxSum.end()){
                int pair = maxSum[digitSum];
                int pairSum = nums[pair] + n;
                maxDigitSum = max(maxDigitSum, pairSum);
                if(n > nums[pair]) maxSum[digitSum] = i;
            } else {
                maxSum[digitSum] = i;
            }
        }

        return maxDigitSum;
    }
};