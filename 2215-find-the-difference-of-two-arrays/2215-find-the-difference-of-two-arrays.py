class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        seen1 = {}
        seen2 = {}
        result = [[], []]

        for n in nums1:
            seen1[n] = True

        for n in nums2:
            seen2[n] = True

        for n in seen1:
            if n not in seen2:
                result[0].append(n)

        for n in seen2:
            if n not in seen1:
                result[1].append(n)



        return result

                
        