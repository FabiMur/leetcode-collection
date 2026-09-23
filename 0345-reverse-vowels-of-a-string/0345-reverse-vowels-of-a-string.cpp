class Solution {
private:
    bool isVowel(char c){
        return string("aeiouAEIOU").find(c) != string::npos;
    }
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right){
            if(!isVowel(s[left])){
                left++;
            } else if (!isVowel(s[right])){
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};