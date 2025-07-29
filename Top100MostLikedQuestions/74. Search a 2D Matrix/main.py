class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:

        for row in matrix:
            if row[0] > target:
                return False

            if row[-1] >= target and row[0] <= target:
                start = 0
                end = len(row) - 1

                while start <= end:
                    m = (start + end)//2

                    if row[m] == target:
                        return True

                    if row[m] > target:
                        end = m - 1
                    else:
                        start = m + 1
        
        return False
        


        
        
