class Solution {
public:
    string reverseWords(string s) {
        istringstream input(s);
        vector<string> words;
        string word;

        while (input >> word) {
            words.push_back(word);
        }

        string result;
        for (int i = static_cast<int>(words.size()) - 1; i >= 0; --i) {
            if (!result.empty()) {
                result += ' ';
            }
            result += words[i];
        }

        return result;
    }
};