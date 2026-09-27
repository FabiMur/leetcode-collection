class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> seen;
        for(int i = 0; i < nums.size(); i++){
            if(seen.contains(nums[i])){
                return true;
            }
            seen[nums[i]] = true;
        }
        return false;
    }
};