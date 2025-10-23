class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        freq.reserve(nums.size());

        for (int n: nums){
            freq[n]++;
        }

        int mitad = nums.size() / 2;
        for (pair<const int, int>& p : freq) {
                if (p.second > mitad)
                    return p.first;
            }
            
        return -1;
    }
};