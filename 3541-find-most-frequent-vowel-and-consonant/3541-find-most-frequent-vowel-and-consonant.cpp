class Solution {
private:
    bool isVowel(char c){
        string s = "aeiou";
        return s.find(c) != string::npos;
    }
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowelFreqs;
        unordered_map<char, int> consonantFreqs;
        int maxVowel = 0;
        int maxConsonant = 0;

        for(char c: s){
            if(isVowel(c)){
                vowelFreqs[c] += 1;
                maxVowel = max(maxVowel, vowelFreqs[c]);
            }else{
                consonantFreqs[c] += 1;
                maxConsonant = max(maxConsonant, consonantFreqs[c]);
            }
        }

        return maxVowel + maxConsonant;
    }
};