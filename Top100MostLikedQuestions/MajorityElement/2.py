class Solution(object):
    def majorityElement(self, nums):
        majority = None
        f = 0
        for i in nums:
            if f == 0:
                sol = i
            if i == majority:
                f += 1
            else:
                f -=1
            cnt += (1 if i == sol else -1)
        return sol