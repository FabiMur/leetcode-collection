class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> seen1(nums1.begin(), nums1.end());
        unordered_set<int> seen2(nums2.begin(), nums2.end());
        vector<vector<int>> solution(2);

        for (int n : seen1)
            if (!seen2.count(n)) solution[0].push_back(n);

        for (int n : seen2)
            if (!seen1.count(n)) solution[1].push_back(n);

        return solution;
    }
};