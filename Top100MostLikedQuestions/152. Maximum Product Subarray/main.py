class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        nMax = nums[0]
        localMin = nums[0]
        localMax = nums[0]

        for n in nums[1:]:
            if n == 0:
                localMin = 0
                localMax = 0
            
            mi = n*localMin
            ma = n*localMax

            localMax = max(n, max(mi, ma))
            localMin = min(n, min(mi, ma))

            nMax = max(nMax, localMax)

        return nMax

        
