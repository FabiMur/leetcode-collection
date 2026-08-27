class Solution:
    def firstUniqChar(self, s: str) -> int:
        char_map = {}
        for i in range(len(s)):
            char = s[i]
            char_map[char] = char_map.get(char, 0) + 1

        
        for i  in range(len(s)):
            char = s[i]
            if char_map[char] <= 1:
                return i

        return -1
        