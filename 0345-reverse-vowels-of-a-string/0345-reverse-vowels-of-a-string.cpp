class Solution {
public:
    string reverseVowels(string s) {
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' ||
                   c == 'o' || c == 'u' || c == 'A' ||
                   c == 'E' || c == 'I' || c == 'O' ||
                   c == 'U';
        };

        int left = 0;
        int right = static_cast<int>(s.size()) - 1;

        while (left < right) {
            if (!isVowel(s[left])) {
                ++left;
            } else if (!isVowel(s[right])) {
                --right;
            } else {
                swap(s[left], s[right]);
                ++left;
                --right;
            }
        }

        return s;
    }
};