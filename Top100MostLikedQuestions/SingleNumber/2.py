class Solution(object):
    def singleNumber(self, nums):
        sorted_nums = sorted(nums)
        for i in range(0, len(nums), 2):
            if i + 1 == len(nums):
                return sorted_nums[i]
            if sorted_nums[i] != sorted_nums[i+1]:
                return sorted_nums[i]
        return sorted_nums[-1]

        