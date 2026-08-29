class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if(len(s) > len(t)):
            return False

        short_pointer = 0
        long_pointer = 0

        while short_pointer < len(s) and long_pointer < len(t):
            if s[short_pointer] == t[long_pointer]:
                short_pointer += 1
                long_pointer += 1
            else:
                long_pointer += 1
        
        return short_pointer == len(s)
        