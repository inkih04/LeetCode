class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        m = {}
        return self.climbStairsHelper(n, m)
    def climbStairsHelper(self, n, memo):
        if n == 0 or n == 1:
            return 1
        if n not in memo:
            memo[n] = self.climbStairsHelper(n - 1, memo) + self.climbStairsHelper(n - 2, memo)
        return memo[n]
    
def main():
    n = int(input())
    s = Solution()
    print(s.climbStairs(n))

if __name__ == "__main__":
    main()