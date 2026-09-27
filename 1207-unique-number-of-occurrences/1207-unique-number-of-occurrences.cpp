class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freqs;
        unordered_map<int, bool> freqs_seen;

        for(int n: arr){
            freqs[n] += 1;
        }

        for(auto& [_, freq]: freqs){
            if(freqs_seen[freq]){
                return false;
            } else {
                freqs_seen[freq] = true;
            }
        }

        return true;
    }
};