class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        total = sum(nums)
        
        if total% 2 != 0:
            return False

        dp = set()
        dp.add(0)
        target = total//2

        for n in nums:
            nextDP = set()

            for t in dp:
                if (t + n) == target:
                    return True

                nextDP.add(t+n)
                nextDP.add(t)
            dp = nextDP
            
        return False



        
        
