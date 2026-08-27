class Solution:
    def splitArray(self, nums: List[int], k: int) -> int:
        def feasible(max_sum):
            """
            Check if we can split the array into at most k subarrays
            where each subarray sum doesn't exceed max_sum.
            """
            current_sum = 0
            subarray_count = 1

            for num in nums:
                if current_sum + num > max_sum:
                    current_sum = num
                    subarray_count += 1
                else:
                    current_sum += num

            return subarray_count <= k
        
        left = max(nums)
        right = sum(nums)
        max_sum = -1

        while left <= right:
            mid = (left + right) // 2
            if feasible(mid):
                max_sum = mid
                right = mid -1
            else:
                left = mid + 1
        return max_sum


 
