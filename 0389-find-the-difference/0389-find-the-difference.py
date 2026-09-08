class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        counts = {}

        for char in s:
            counts[char] = counts.get(char, 0) + 1

        for char in t:
            if counts.get(char, 0) == 0:
                return char

            counts[char] -= 1