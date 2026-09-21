class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result;
        result.reserve(word1.size()+word2.size());
        size_t i = 0;

        while(i < word1.size() || i < word2.size()){
            if(i < word1.size()) result += word1[i];
            if(i < word2.size()) result += word2[i];
            ++i;
        }

        return result;
    }
};