class Solution:
    def uniqueOccurrences(self, arr: list[int]) -> bool:
        number_freqs = {}
        freq_freqs = {}

        for n in arr:
            number_freqs[n] = number_freqs.get(n, 0) + 1
        
        for number_freq in number_freqs.values():
            if number_freq not in freq_freqs:
                freq_freqs[number_freq] = True
            else:
                return False

        return True

            