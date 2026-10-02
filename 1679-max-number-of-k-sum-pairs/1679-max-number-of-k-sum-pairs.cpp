class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        int ops = 0;

        for(int n: nums){
            int complement = k - n;

            if(freqs[complement] > 0){
                freqs[complement] -= 1;
                ops++;
            } else {
                freqs[n]++;
            }
        }

        return ops;
    }
};