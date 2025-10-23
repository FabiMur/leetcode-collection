class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;

        for (int n: nums){
            freq[n]++;
        }

        int mitad = nums.size() / 2;
        for (pair<const int, int>& p : freq) {
                int num = p.first;
                int count = p.second;
                if (count > mitad)
                    return num;
            }
            
        return -1;
    }
};