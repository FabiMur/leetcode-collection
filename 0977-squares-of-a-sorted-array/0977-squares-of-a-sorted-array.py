class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        nums = sorted(nums, key=abs)
        for i, n in enumerate(nums):
            nums[i] = n * n

        return nums