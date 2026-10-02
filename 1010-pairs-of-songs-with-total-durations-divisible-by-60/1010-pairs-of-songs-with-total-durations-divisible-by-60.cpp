class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int pairs = 0;
        int maxPair = *max_element(time.begin(), time.end()) * 2;
        int maxMult = maxPair/60;
        
        unordered_map<int, int> freq;
        for(int t: time){
            for(int i = 1; i <= maxMult; i++){
                int divisor = 60 * i;
                int target = divisor - t;
                if(freq[target] > 0){
                    pairs+= freq[target];
                }
            }
            freq[t]++;
        }



        return pairs;
    }
};