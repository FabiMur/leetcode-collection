class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for (int n: nums)
            freq[n]++;

        int mitad = nums.size() / 2;
        for (auto& [num, count] : freq)
            if (count > mitad)
                return num;

        return 0;
    }
};