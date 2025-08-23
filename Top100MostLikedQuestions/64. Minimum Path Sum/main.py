class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        row, column = len(grid), len(grid[0])
        res = [[-1 for _ in range(column)] for _ in range(row)]

        for r in range(len(grid) - 1, -1, -1):
            for c in range(len(grid[r]) - 1, -1, -1):
                rightVal = float('inf')
                downVal = float('inf')

                if c + 1 < len(grid[r]):
                    rightVal = res[r][c+1]
                if r + 1 < len(grid):
                    downVal = res[r+1][c]

                shortestPath = min(rightVal, downVal)

                if shortestPath == float('inf'): #base case 
                    shortestPath = 0

                res[r][c] =  shortestPath + grid[r][c]  

        return res[0][0]




        
