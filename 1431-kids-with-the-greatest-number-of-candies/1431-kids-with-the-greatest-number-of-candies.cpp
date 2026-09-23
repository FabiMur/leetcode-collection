class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies = *max_element(candies.begin(), candies.end());
        vector<bool> solution;
        solution.reserve(candies.size());

        for (int candy : candies) {
            solution.push_back(candy + extraCandies >= maxCandies);
        }

        return solution;
    }
};