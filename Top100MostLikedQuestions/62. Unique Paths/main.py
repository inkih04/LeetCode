class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        res  = [[-1 for _ in range(n) ] for _ in range(m)]
        res[0][0] = 1

        for r in range(m):
            for c in  range(n):
                if res[r][c] == -1: #has value  
                    top = 0
                    left = 0

                    if c - 1 >= 0:
                        left = res[r][c-1]
                    if r - 1 >= 0:
                        top = res[r-1][c]
                    
                    res[r][c] = left + top

        return res[m-1][n-1]




        
