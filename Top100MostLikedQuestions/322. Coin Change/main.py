class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        dp = [float('inf')]*(amount + 1) 
        dp[0] = 0 
        
        for i in range(1, amount + 1, 1):
            for coin in coins:
                if i >= coin:
                    dp[i] = min ((1 + dp[i - coin]), dp[i])

        if dp[-1] == float('inf'):
            return -1

        return dp[-1]


            
        
