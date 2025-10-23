class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand = 0, count = 0;
        
        for (int n : nums) {
            if (count == 0) cand = n;
            count += (n == cand) ? 1 : -1;
        }
        return cand;
    }
};