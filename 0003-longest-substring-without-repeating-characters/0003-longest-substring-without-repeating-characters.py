class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sol = 0
        start = 0
        seen = {}

        for end in range(len(s)):
            while seen.get(s[end], False):
                seen[s[start]] = False
                start += 1

            seen[s[end]] = True
            sol = max(sol, end - start + 1)

        return sol