import sys

class Solution(object):
    def maxProfit(self, prices):
        profit = 0
        best_profit = 0
        least = sys.maxsize
        for n in prices:
            least = min(n, least)
            profit = n - least
            best_profit = max(profit, best_profit)
        return best_profit