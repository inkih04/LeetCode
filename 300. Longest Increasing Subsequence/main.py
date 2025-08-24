class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        res = [ 0]  * len(nums)
        maxLength = 0

        for i in range(len(nums)-1, -1, -1):
            previousLength = 0

            for j in range(i + 1, len(nums), 1):
                if nums[i] < nums[j]:
                    previousLength = max(res[j], previousLength)
            
            res[i] = previousLength + 1
            maxLength = max(res[i], maxLength)

        return maxLength
