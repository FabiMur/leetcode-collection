class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        left, right = 0, 1
        current_value = nums[0]
        maxV = nums[0]

        while right < len(nums):
            current_value += nums[right]

            if current_value < nums[right]:
                left = right
                current_value = nums[right]

            maxV = max(maxV, current_value)
            right += 1

        return maxV