class Solution:
    def findDifference(self, nums1: list[int], nums2: list[int]) -> list[list[int]]:
        seen1 = {}
        seen2 = {}
        result = [[], []]

        for n in nums1:
            seen1[n] = True

        for n in nums2:
            seen2[n] = True

        for n in nums1:
            if seen2.get(n, False) == False and n not in result[0]:
                result[0].append(n)

        for n in nums2:
            if seen1.get(n, False) == False and n not in result[1]:
                result[1].append(n)



        return result

                
        