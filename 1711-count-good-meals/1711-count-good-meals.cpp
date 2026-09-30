class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        const int MOD = 1e9 + 7;

        unordered_map<int, int> freq;
        long long solution = 0;

        for (int d : deliciousness) {

            for (int power = 1; power <= (1 << 21); power <<= 1) {
                int complement = power - d;

                if (freq.contains(complement)) {
                    solution += freq[complement];
                    solution %= MOD;
                }
            }

            freq[d]++;
        }

        return solution;
    }
};