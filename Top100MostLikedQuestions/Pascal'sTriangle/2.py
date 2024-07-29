class Solution(object):
    def generate(self, numRows):
        list = []
        list[0].append([1])
        for i in range(numRows - 1):
            newRow = [1]
            for j in range(i):
                newRow.append(list[i][j] + list[i][j+1])
            newRow.append(1)
            list.append(newRow)
        return list
    