class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left = 0
        right = len(nums) - 1

        solution = []

        while left <= right:
            if abs(nums[left]) >= abs(nums[right]):
                solution.append(nums[left]**2)
                left += 1
            else:
                solution.append(nums[right]**2)
                right -= 1
    
        return solution[::-1]

